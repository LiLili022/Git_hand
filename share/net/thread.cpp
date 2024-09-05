#include "thread.h"
using namespace std;

int main(){
    thread th1(fun_1);
    thread th2(fun_2);

    signal(SIGINT, fun_int);
    signal(SIGQUIT, fun_quit);
    // cout << "out pause()" << endl;
    // pause();
    // cout << "pause() over" << endl;

    lambda_class lbd_c;
    thread th3(lbd_c);
    th3.join();

    thread th4(lambda_thread);
    th4.join();

    Data_ data;
    thread th5(&Data_::DataFirstFunc, &data);
    thread th6(&Data_::DataSecondFunc, &data, 10);
    th5.join();
    th6.join();

    vector<thread> vec_thread;
    for(int i = 0; i<10; ++i){
        vec_thread.push_back(thread(TextThread));
    }
    for(vector<thread>::iterator it_thread = vec_thread.begin(); it_thread != vec_thread.end();++it_thread){
        it_thread->join();
    }

    // std::mutex mymutex1;
    // std::unique_lock<std::mutex> sbguard1(mymutex1);
    // std::condition_variable condition;
    // condition.wait(sbguard1);

    th1.join();
    cout << "th1.join() is over" << endl;
    th2.join();
    cout << "th2.join() is over" << endl;
    return 1;
}

// int main() {
// 	// A myobja;
// 	// std::thread myoutobj(&A::outMsgRecvQueue, &myobja);
// 	// std::thread myinobj(&A::inMsgRecvQueue, &myobja);
// 	// myinobj.join();
// 	// myoutobj.join();

//     // printf("%d\n", BUFSIZ);

//     // char str[10];
//     // memset(str, 1, sizeof(str));
//     // printf("%s\n",str);

//     // scanf("%[^\n]d",str);//可获取带空格字符串
//     // printf("%s\n",str);

//     // scanf("%[a-zA-Z]s",str);//获取纯字母
//     // printf("%s\n",str);

//     // char num_s[4] = {'1','2','3'};      // 123 : sizeof = 4; strlen = 3
//     // // char num_s[4] = "123";           // 123 : sizeof = 4; strlen = 3
//     // // char num_s[3] = {'1','2','3'};   // 123 : sizeof = 3; strlen = 6
//     // // char num_s[3] = "123";           // 报错
//     // printf("%s : sizeof = %d; strlen = %d\n", num_s, sizeof(num_s), strlen(num_s));

//     char str2[] = "str2 Test";
//     char str3[] = "Test str3 2222";
//     // strncpy ( str3, str2, sizeof(str2) ); // 10
//     // strncpy ( str3, str2, 9 );
//     strncpy ( str2, str3, sizeof(str3) ); // 15
//     printf("%s , sizeof(str2) = %d\n", str2, sizeof(str2));
//     // out(15) : Test str3 2222 , sizeof(str2) = 10 // warning
//     str3[9] = '_';
//     printf("%s , sizeof(str3) = %d\n", str3, sizeof(str3)); 
//     // out(10) : str2 Test_2222 , sizeof(str3) = 15

//     return 0;
// }