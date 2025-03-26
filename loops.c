#include "main.h"

struct coordiantes {
  int start;
  int end;
};

void print_numbers(struct coordiantes c);
void print_numbers_reverse(struct coordiantes c);

int main() {
  struct coordiantes c;
  c.start = 10;
  c.end = 20;

  return EXIT_SUCCESS;
}

void print_numbers(struct coordiantes c) {
  for (int i = c.start; i <= c.end; i++) {
    printf("%d\n", i);
  }
}

void print_numbers_reverse(struct coordiantes c) {
  while (c.start >= c.end) {
    printf("%d\n", c.start);
    c.start--;
  }
}
