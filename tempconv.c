#include "main.h"

int main() {
  char unit;
  float temp;
  printf("Temprature is in F or C?: ");
  scanf("%c", &unit);
  printf("Temprature: ");
  scanf("%f", &temp);

  if (unit == 'c' || unit == 'C') {
    printf("Current temp in C: %0.2f\n", temp);
    temp = (temp * 9 / 5) + 32;
    printf("Temprature in F: %0.2f\n", temp);

  } else if (unit == 'f' || unit == 'F') {
    printf("Current temp in F: %0.2f\n", temp);
    temp = (temp - 32) * 5 / 9;
    printf("Temprature in C: %0.2f\n", temp);

  } else {
    printf("Invalid unit supplied!\n");
  }
  return 0;
}
