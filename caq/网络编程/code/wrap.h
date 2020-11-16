#ifndef __WRAP_H
#define __WRAP_H

void perr_exit(const char* s);
int Socket(int family, int type, int protocol);
int Bind(int fd, const struct sockaddr* myaddr, socklen_t addrlen);
int Listen(int fd,int backlog);
int Accept(int fd, struct sockaddr* cliaddr, socklen_t* addrlen);
int Connect(int fd, const struct sockaddr* servaddr, socklen_t addrlen);

#endif