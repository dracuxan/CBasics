#include "main.h"

int
main ()
{
  // int arr[] = {1, 2, 3, 4, 4, 5};
  // int n = *(&arr + 1) - arr;
  // for (int i = 0; i < n; i++) {
  //   printf("%d\t", arr[i]);
  // }
  // printf("\n");

  // int arr[][3] = {{1, 2, 3}, {5, 6, 7}, {2, 4, 6}};
  // int rows, columns;
  // rows = sizeof(arr) / sizeof(arr[0]);
  // columns = sizeof(arr[0]) / sizeof(arr[0][0]);
  //
  // for (int i = 0; i < rows; i++) {
  //   for (int j = 0; j < columns; j++) {
  //     printf("%d\t", arr[i][j]);
  //   }
  //   printf("\n");
  // }

  char cars[][10] = { "toyota", "maruti", "benz", "bmw" };
  int rows;
  rows = sizeof (cars) / sizeof (cars[0]);

  for (int i = 0; i < rows; i++)
    {
      printf ("%s\n", cars[i]);
    }

  return 0;
}
