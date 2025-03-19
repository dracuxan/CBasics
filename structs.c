#include "main.h"

struct Players
{
  char name[32];
  int age;
};

int
main (void)
{
  struct Players virat;
  virat.age = 40;
  strcpy (virat.name, "virat");

  printf ("Name: %s\n", virat.name);
  printf ("Age: %d\n", virat.age);

  return 0;
}
