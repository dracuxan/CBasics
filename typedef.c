#include "main.h"

typedef char Password[128];

typedef struct
{
  char name[32];
  Password pass;
  int age;
} Users;

int
main ()
{
  Users user1 = { "Nisarg", "Password", 21 };

  Users user2 = { "Nisarg2", "Password2", 21 };

  printf ("Name: %s\n", user1.name);
  printf ("Password: %s\n", user1.pass);
  printf ("Age: %d\n", user1.age);

  printf ("\n");

  printf ("Name: %s\n", user2.name);
  printf ("Password: %s\n", user2.pass);
  printf ("Age: %d\n", user2.age);

  return EXIT_SUCCESS;
}
