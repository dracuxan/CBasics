#include "main.h"

typedef struct
{
  char name[32];
  int age;
} Players;

int
main (void)
{
  Players virat = { "Virat", 32 };
  Players nisarg = { "Nisarg", 21 };

  // printf ("Name: %s\n", virat.name);
  // printf ("Age: %d\n", virat.age);

  Players players[] = { virat, nisarg };
  int n = sizeof (players) / sizeof (players[0]);

  for (int i = 0; i < n; i++)
    {
      printf ("Name: %s\n", players[i].name);
      printf ("Age: %d\n", players[i].age);
    }

  return 0;
}
