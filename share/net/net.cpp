
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#define SERV_PORT 9000  

int main(int argc, char *const *argv)
{
    int listenfd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in serv_addr;
    memset(&serv_addr,0,sizeof(serv_addr));
    
    serv_addr.sin_family = AF_INET;                //选择协议族为IPV4
    serv_addr.sin_port = htons(SERV_PORT);         //绑定我们自定义的端口号
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY); //监听本地所有的IP地址

    bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));//绑定服务器地址结构体
    listen(listenfd, 32);

    int connfd;
    const char *pcontent = "I sent sth to client!";
    char buf[1024] = {0};
    for(;;)
    {
        std::cout << "server listening ..." << std::endl;
        //卡在这里，等客户单连接
        connfd = accept(listenfd, (struct sockaddr*)NULL, NULL);
        std::cout << "server accept one connect!" << std::endl;

        int n = recv(connfd, buf, sizeof(buf), 0);
        if (n <= 0) {
            printf("recv fail!\n");
        } else 
            printf("%s\n", buf);

        write(connfd,pcontent,strlen(pcontent)+1);

        close(connfd); 
    } //end for
    close(listenfd);
    return 0;
}





