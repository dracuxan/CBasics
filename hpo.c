#include "main.h"

int main() {

  double a, b, c;

  printf("Enter length of side A: ");
  scanf("%lf", &a);

  printf("Enter length of side B: ");
  scanf("%lf", &b);

  c = sqrt(a * a + b * b);
  printf("Length of side c: %0.2lf\n", c);

  return 0;
}
