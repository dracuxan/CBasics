#include "main.h"

void sieve(int fd_read) {

  int prime;

  if (read(fd_read, &prime, sizeof(prime)) != sizeof(prime)) {
    close(fd_read);
    exit(0);
  }

  printf("prime %d\n", prime);

  int fd1[2];
  pipe(fd1);

  int ch1 = fork();
  if (ch1 > 0) {
    close(fd1[0]);
    int num;

    while (read(fd_read, &num, sizeof(num)) > 0) {
      if (num % prime != 0) {
        write(fd1[1], &num, sizeof(num));
      }
    }

    close(fd1[1]);
    close(fd_read);
    wait((int *)0);
    exit(0);
  }

  if (ch1 == 0) {
    close(fd1[1]);
    sieve(fd1[0]);
  }
}

int main() {
  int fd[2];
  pipe(fd);

  int ch = fork();
  if (ch > 0) {
    close(fd[0]);

    for (int i = 2; i <= 280; i++) {
      write(fd[1], &i, sizeof(i));
    }

    close(fd[1]);
    wait((int *)0);
  }
  if (ch == 0) {
    close(fd[1]);
    sieve(fd[0]);
  }

  exit(0);
}
