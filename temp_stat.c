#include <stdio.h>

char *get_temperature_status(int temp);

int main() {
  char *temp_stat = get_temperature_status(50);
  printf("%s", temp_stat);
  return 0;
}

char *get_temperature_status(int temp) {
  if (temp > 88) {
    return "too hot";
  } else if (temp < 68) {
    return "too cold";
  } else {
    return "just right";
  }
}
