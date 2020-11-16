#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include "wrap.h"
#define SERV_IP "127.0.0.1"
#define SERV_PORT 6666

int main(void){
    int cfd;
    struct sockaddr_in serv_addr;
    //socklen_t serv_addr_len;
    char buf[BUFSIZ];
    int n;
    cfd = Socket(AF_INET,SOCK_STREAM,0);

    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    inet_pton(AF_INET,SERV_IP,&serv_addr.sin_addr.s_addr);
    serv_addr.sin_port = htons(SERV_PORT);
    Connect(cfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr));

    while(1){
        fgets(buf,sizeof(buf),stdin);   //hello world --- fgets ---> "hello world\n\0"

        int tmp = send(cfd,buf,strlen(buf),0);     //默认不考虑\0
        
        if(tmp==-1){
            perr_exit("send error");
        }
        //printf("tmp=%d\n",tmp);
        n = recv(cfd,buf,sizeof(buf),0);  //考虑\0
        if(n==-1){
            perr_exit("recv error");
        }
        //printf("n=%d\n",n);
        write(STDOUT_FILENO,buf,n);     //写到屏幕
    }
    
    close(cfd);
    return 0;
}