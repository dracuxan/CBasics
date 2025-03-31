#include "main.h"

int main() {
  int arr[][3] = {{1, 2, 3}, {5, 6, 7}, {2, 4, 6}};
  int rows, columns;

  rows = sizeof(arr) / sizeof(arr[0]);
  columns = sizeof(arr[0]) / sizeof(arr[0][0]);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
