#include "main.h"

int main() {

  srand(time(0));

  int rand_num = rand() % 10 + 1;

  printf("%d\n", rand_num);

  return EXIT_SUCCESS;
}
