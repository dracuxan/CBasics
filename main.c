#include "main.h"

int main(int argc, char *argv[]) {
  printf("Hello World!\n");

  if (argc > 1) {
    printf("%s\n", argv[1]);
  } else {
    printf("No arguments supplied.\n");
  }

  return EXIT_SUCCESS;
}
