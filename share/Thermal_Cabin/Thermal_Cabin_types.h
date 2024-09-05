/*
 * File: Thermal_Cabin_types.h
 *
 * Code generated for Simulink model 'Thermal_Cabin'.
 *
 * Model version                  : 5.2430
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Jul 25 13:37:31 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-A
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Thermal_Cabin_types_h_
#define RTW_HEADER_Thermal_Cabin_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef struct_tag_KONEoa9l9V2S3eGNyMp4IG
#define struct_tag_KONEoa9l9V2S3eGNyMp4IG

struct tag_KONEoa9l9V2S3eGNyMp4IG
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real32_T pWinLen;
  real32_T pBuf[100];
  real32_T pHeap[100];
  real32_T pMidHeap;
  real32_T pIdx;
  real32_T pPos[100];
  real32_T pMinHeapLength;
  real32_T pMaxHeapLength;
};

#endif                                 /* struct_tag_KONEoa9l9V2S3eGNyMp4IG */

#ifndef typedef_c_dsp_internal_MedianFilterCG_Thermal_Cabin_T
#define typedef_c_dsp_internal_MedianFilterCG_Thermal_Cabin_T

typedef struct tag_KONEoa9l9V2S3eGNyMp4IG
  c_dsp_internal_MedianFilterCG_Thermal_Cabin_T;

#endif               /* typedef_c_dsp_internal_MedianFilterCG_Thermal_Cabin_T */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap_Thermal_Cabin_T
#define typedef_cell_wrap_Thermal_Cabin_T

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap_Thermal_Cabin_T;

#endif                                 /* typedef_cell_wrap_Thermal_Cabin_T */

#ifndef struct_tag_4O8cYe9AbyaMl55TNdSsXG
#define struct_tag_4O8cYe9AbyaMl55TNdSsXG

struct tag_4O8cYe9AbyaMl55TNdSsXG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap_Thermal_Cabin_T inputVarSize;
  int32_T NumChannels;
  c_dsp_internal_MedianFilterCG_Thermal_Cabin_T pMID;
};

#endif                                 /* struct_tag_4O8cYe9AbyaMl55TNdSsXG */

#ifndef typedef_dsp_MedianFilter_Thermal_Cabin_T
#define typedef_dsp_MedianFilter_Thermal_Cabin_T

typedef struct tag_4O8cYe9AbyaMl55TNdSsXG dsp_MedianFilter_Thermal_Cabin_T;

#endif                            /* typedef_dsp_MedianFilter_Thermal_Cabin_T */

/* Parameters (default storage) */
typedef struct P_Thermal_Cabin_T_ P_Thermal_Cabin_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Thermal_Cabin_T RT_MODEL_Thermal_Cabin_T;

#endif                                 /* RTW_HEADER_Thermal_Cabin_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
