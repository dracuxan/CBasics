#include "main.h"

int main(int argc, char *argv[]) {
  const float pi = 3.14;
  if (argc <= 1) {
    printf("Usage: ./circum <radius>\n");
    return 1;
  }
  int radius = atoi(argv[1]);

  float circum = 2 * pi * radius;

  printf("Radius of circle: %0.3f\n", circum);

  return 0;
}
