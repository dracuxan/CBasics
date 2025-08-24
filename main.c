#include "strings.h"
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define BUFFSIZE 150

void err_sys(const char *x) {
  perror(x);
  exit(1);
}

int main(int argc, char **argv) {
  struct sockaddr_in servaddr;
  char recv_bff[BUFFSIZE];
  int sockfd, n;

  if (argc != 2)
    err_sys("usage: main <IP_ADDRESS>");
  if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    err_sys("socket error");
  bzero(&servaddr, sizeof(servaddr));
  servaddr.sin_family = AF_INET;
  servaddr.sin_port = htons(13);
  if (inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0) {
    err_sys("inet_pton error for the given input");
  }
  if (connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
    err_sys("connect error");
  }

  while ((n = read(sockfd, recv_bff, BUFFSIZE)) > 0) {
    recv_bff[n] = 0;
    if (fputs(recv_bff, stdout) == EOF) {
      err_sys("fputs error");
    }
  }
  if (n < 0) {
    err_sys("read error");
  }

  exit(0);
}
