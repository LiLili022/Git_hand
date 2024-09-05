#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Thermal_Cabin.h"
#include "Get_Inputs_Value.h"

typedef struct {
pthread_t thread;
int index;
pthread_mutex_t mutex;
pthread_cond_t startEvent;
pthread_cond_t stopEvent;
int exitFlag;
} ThreadInfo;

ThreadInfo periodicThread[1];
ThreadInfo periodicTriggerThread[1];

void *baseRateTaskScheduler(void *arg)
{
  int taskId = 0;
  struct timespec waitTime;
  int line = 1;
  int log_line = 53044;

  // while (true) {
  while (line <= log_line) {
    ++line;
    cout << line <<endl;
    /* Check for Ctrl+C event */
    usleep(100000); // 0.1 second
    pthread_mutex_lock(&periodicTriggerThread[taskId].mutex);
    /* Perform task execution */
    pthread_cond_signal(&periodicThread[taskId].startEvent);
    pthread_mutex_unlock(&periodicTriggerThread[taskId].mutex);

    // GetInputsValue();
    // SetInputsValue(Thermal_Cabin_U, KeCHMI_T_SetTempMLRv, KeCHMI_T_SetTempRRv, KeCHMI_T_SetTempLRv);
    // Thermal_Cabin_step();
    // GetOutputsValue(Thermal_Cabin_Y);
  }

  periodicThread[taskId].exitFlag = 1;
  pthread_cond_signal(&periodicThread[taskId].startEvent);
  pthread_exit(NULL);
}

void *periodicTask(void *arg) {
  ThreadInfo *info = (ThreadInfo *)arg;
  int noErr = 1;

  while (noErr) {
    pthread_mutex_lock(&info->mutex);
    pthread_cond_wait(&info->startEvent, &info->mutex);

    if (info->exitFlag) {
      noErr = 0;
    }

    if (noErr) {
      GetInputsValue();
      SetInputsValue(Thermal_Cabin_U, KeCHMI_T_SetTempMLRv, KeCHMI_T_SetTempRRv, KeCHMI_T_SetTempLRv);
      Thermal_Cabin_step();
      GetOutputsValue(Thermal_Cabin_Y);
      
      /* Get model outputs here */
      pthread_cond_signal(&info->stopEvent);
    }
    pthread_mutex_unlock(&info->mutex);
  }

  pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
  /* Initialize model */
  Thermal_Cabin_initialize();
  rtmSetErrorStatus(Thermal_Cabin_M, 0);
  InitLogFile();

  /* Create periodic threads */
  for (int i = 0; i < 1; i++) {
    periodicThread[i].index = i;
    periodicThread[i].exitFlag = 0;
    pthread_mutex_init(&periodicThread[i].mutex, NULL);
    pthread_cond_init(&periodicThread[i].startEvent, NULL);
    pthread_cond_init(&periodicThread[i].stopEvent, NULL);
    pthread_create(&periodicThread[i].thread, NULL, periodicTask, (void *)&periodicThread[i]);
  }

  /* Create periodic trigger threads */
  periodicTriggerThread[0].index = 0;
  periodicTriggerThread[0].exitFlag = 0;
  pthread_mutex_init(&periodicTriggerThread[0].mutex, NULL);
  pthread_create(&periodicTriggerThread[0].thread, NULL, baseRateTaskScheduler, NULL);

  /* Wait for a stopping condition. */
  for (int i = 0; i < 1; i++) {
    pthread_join(periodicTriggerThread[i].thread, NULL);
  }

  /* Clean up */
  for (int i = 0; i < 1; i++) {
    pthread_mutex_destroy(&periodicThread[i].mutex);
    pthread_cond_destroy(&periodicThread[i].startEvent);
    pthread_cond_destroy(&periodicThread[i].stopEvent);
  }

  if (rtmGetErrorStatus(Thermal_Cabin_M) != NULL) {
    fprintf(stderr, "\n**%s**\n", rtmGetErrorStatus(Thermal_Cabin_M));
  }

  /* Terminate model */
  Thermal_Cabin_terminate();
  return 0;
}