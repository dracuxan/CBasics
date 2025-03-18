#include "main.h"

int findmax(int a, int b);

int main() {
  int max = findmax(3, 1);
  printf("%d\n", max);
  return 0;
}

int findmax(int a, int b) {
  return (a > b) ? a : b;
}
