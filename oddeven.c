#include "main.h"

int main() {
  pid_t ch1 = fork();

  if (ch1 < 0) {
    perror("fork() failed");
    exit(EXIT_FAILURE);
  }

  if (ch1 == 0) {
    printf("Even Numbers (Child PID: %d)\n", getpid());
    for (int i = 0; i < 10; i++) {
      if ((i & 1) == 0) {
        printf("%d\t", i);
      }
    }
    printf("\n");
  } else {
    pid_t ch2 = fork();
    if (ch2 < 0) {
      perror("fork() failed");
      exit(EXIT_FAILURE);
    }

    if (ch2 == 0) {
      printf("Odd Numbers (Child PID: %d)\n", getpid());
      for (int i = 0; i < 10; i++) {
        if ((i & 1) != 0) {
          printf("%d\t", i);
        }
      }
      printf("\n");
    } else {
      wait(NULL);
      wait(NULL);
      printf("Both process finished executions (Parent PID: %d)\n", getpid());
    }
  }

  return EXIT_SUCCESS;
}
