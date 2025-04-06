#include "main.h"

int main() {
  int fd[2];
  int fd2[2];
  pipe(fd);
  pipe(fd2);

  pid_t ch = fork();

  if (ch < 0) {
    perror("fork() failed!\n");
    exit(EXIT_FAILURE);
  }

  if (ch > 0) // parent process
  {
    int n;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);

    close(fd[0]); // close read end
    write(fd[1], &n, sizeof(n));
    close(fd2[1]);

    wait(NULL);

    int fact;
    read(fd2[0], &fact, sizeof(fact));
    printf("Factorial of %d = %d\n", n, fact);
    close(fd[1]); // close write end
    close(fd2[0]);
  }

  else {
    close(fd[1]); // close write end

    int n, fact = 1;
    read(fd[0], &n, sizeof(n));

    close(fd[0]); // close read end

    // int original_n = n; // Store original number
    while (n > 0) {
      fact *= n;
      n--;
    }

    close(fd2[0]);
    write(fd2[1], &fact, sizeof(fact));

    close(fd2[1]);
    exit(0);
  }

  return EXIT_SUCCESS;
}
