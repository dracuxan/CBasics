#include "main.h"

typedef enum { mon, tue, wed, thu, fri, sat, sun } Days;

int main() {
  Days tody = wed;
  printf("%d\n", tody);

  if (tody == sun || tody == sat) {
    printf("weekend\n");
  } else {
    printf("Work today\n");
  }

  return EXIT_SUCCESS;
}
