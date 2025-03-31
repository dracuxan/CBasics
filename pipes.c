#include "main.h"

int main() {
  int fd[2];
  pipe(fd);

  pid_t ch = fork();

  if (ch < 0) {
    perror("fork() failed!\n");
    exit(EXIT_FAILURE);
  }

  if (ch > 0) // parent process
  {
    close(fd[0]); // close read end
    int n;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);
    write(fd[1], &n, sizeof(n));
    close(fd[1]); // close write end
    wait(NULL);
  }

  else {
    close(fd[1]); // close write end
    int n, fact = 1;

    read(fd[0], &n, sizeof(n));
    close(fd[0]); // close read end

    int original_n = n; // Store original number
    while (n > 0) {
      fact *= n;
      n--;
    }

    printf("Factorial of %d = %d\n", original_n, fact);
    exit(0);
  }

  return EXIT_SUCCESS;
}
