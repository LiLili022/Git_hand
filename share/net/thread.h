#include <iostream>
#include <thread>
#include <unistd.h>
#include <signal.h>
#include <vector>
#include <list>
#include <mutex>
#include <condition_variable>
#include <string.h>
using namespace std;

static bool flag_1 = true;
static bool flag_2 = true;

void fun_1(){
    while(flag_1) {
        sleep(1);
        cout << "this is fun() : 1 " << getpid() <<endl;
    }
}
void fun_2(){
    while(flag_2) {
        sleep(2);
        cout << "this is fun() : 2 " << getpid() <<endl;
    }
}

void fun_int(int n){
    cout << "Get signal : SIGINT_2" << endl;
    if (flag_1) {
        flag_1 = false;
        flag_2 = true;
    } else {
        flag_1 = true;
        flag_2 = false;
    }
}
void fun_quit(int n){
    cout << "Get signal : SIGQUIT_3" << endl;
    exit(1);
}

class lambda_class{
public:
    void operator() () {
        cout << "lambda_class()" << endl;
    }
};

auto lambda_thread = []{
    cout << "lambda_thread()" << endl;
};

class Data_ {
public:
    void DataFirstFunc(){
        cout << "Data_::DataFirstFunc()" << endl;
    }
    void DataSecondFunc(int n) {
        cout << "Data_::DataSecondFunc() : " << n << endl;
    }
};

void TextThread(){
    cout << this_thread::get_id() << endl;
}

class A {
public:
    void inMsgRecvQueue() {
        for (int i = 0; i < 10000000000; ++i) 
        {
            cout << "inMsgRecvQueue插入一个元素" << i << endl;
            std::unique_lock<std::mutex> sbguard1(mymutex1);
            msgRecvQueue.push_back(i); 
            condition.notify_one();
        }
	}
 
	void outMsgRecvQueue() {
        int command = 0;
        while (true) {
            std::unique_lock<std::mutex> sbguard2(mymutex1);
            //如果为true才会继续往下执行
            condition.wait(sbguard2, [this] {
                if (!msgRecvQueue.empty())
                    return true;
                return false;});
            command = msgRecvQueue.front();
            msgRecvQueue.pop_front();
            sbguard2.unlock(); 
            cout << "outMsgRecvQueue()执行，取出第一个元素" << endl;
        }
	}
 
private:
	std::list<int> msgRecvQueue;
	std::mutex mymutex1;
	std::condition_variable condition;
};