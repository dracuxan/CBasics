#include "main.h"

int
main ()
{
  // char a = 'a';
  // char b = 'a';
  //
  // printf("%p\n", &a);
  // printf("%p\n", &b);

  int x = 0;
  int *x_ptr = &x;
  *x_ptr = 1;
  printf ("%d\n", x);
  printf ("%d\n", *x_ptr);

  return EXIT_SUCCESS;
}
