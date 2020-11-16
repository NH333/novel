#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
//#include <netinet/in.h>
#include <arpa/inet.h>
#include <ctype.h>
#include <error.h>
//#include <iostream>
#include "wrap.h"

#define SERV_IP "127.0.0.1"
#define SERV_PORT 6666

int main(void){

    
    int lfd,cfd;  //lfd: 监听socket； cfd：连接socket
    struct sockaddr_in serv_addr,clie_addr;
    socklen_t clie_addr_len;
    char buf[BUFSIZ],clie_IP[BUFSIZ];
    int n;

    lfd = Socket(AF_INET,SOCK_STREAM,0);

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(SERV_PORT);
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    Bind(lfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));

    Listen(lfd,128);

    clie_addr_len = sizeof(clie_addr);
    cfd = Accept(lfd,(struct sockaddr*)&clie_addr,&clie_addr_len);
    printf("client IP:%s, client port:%d\n",
            inet_ntop(AF_INET,&clie_addr.sin_addr.s_addr,clie_IP,sizeof(clie_IP)),
            ntohs(clie_addr.sin_port));



    while(1){
        printf("使用 recv\n");
        n = recv(cfd,buf,sizeof(buf),0);
        
        if(n==-1){
            perr_exit("server recv error");
        }
        printf("n=%d\n",n);
        
        for(int i=0;i<n;++i){
            buf[i] = toupper(buf[i]);
        }
        
        send(cfd,buf,sizeof(buf),0);
    }
    
    /*
    while(1){
        n = read(cfd,buf,sizeof(buf));
        for(int i=0;i<n;++i){
            buf[i] = toupper(buf[i]);
        }
        write(cfd,buf,n);
    }*/
    
    
    close(lfd);
    close(cfd);
    return 0;
}