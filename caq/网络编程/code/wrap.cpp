#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/socket.h>

#include "wrap.h"

void perr_exit(const char* s){
    perror(s);
    exit(-1);
}

int Socket(int family, int type, int protocol){
    int n;
    n = socket(family,type,protocol);
    if(n == -1){
        perr_exit("socket error");
    }
    return n;
}

int Bind(int fd, const struct sockaddr* myaddr, socklen_t addrlen){
    int n;
    n = bind(fd,myaddr,addrlen);
    if(n == -1){
        perr_exit("bind error");
    }

    return n;
}

int Listen(int fd,int backlog){
    int n;
    n = listen(fd,backlog);
    if(n == -1){
        perr_exit("linsten error");
    }

    return n;
}

int Accept(int fd, struct sockaddr* cliaddr, socklen_t* addrlen){
    int n;
    n = accept(fd,cliaddr,addrlen);
    if(n == -1){
        perr_exit("accept error");
    } 
    return n;
}

int Connect(int fd, const struct sockaddr* servaddr, socklen_t addrlen){
    int n;
    n = connect(fd,servaddr,addrlen);
    if(n==-1){
        perr_exit("connect error");
    }
    return n;
}
