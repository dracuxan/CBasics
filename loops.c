#include "main.h"

void print_numbers(int start, int end);
void print_numbers_reverse(int start, int end);

int main() {
  print_numbers(9, 10);
  print_numbers_reverse(10, 1);

  return EXIT_SUCCESS;
}

void print_numbers(int start, int end) {
  for (int i = start; i <= end; i++) {
    printf("%d\n", i);
  }
}

void print_numbers_reverse(int start, int end) {
  int i = start;
  while (i >= end) {
    printf("%d\n", i);
    i--;
  }
}
