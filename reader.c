#include "main.h"

int main() {
  pid_t process_id = getpid();
  pid_t process_parent_id = getppid();

  printf("%d\n", process_id);
  printf("%d\n", process_parent_id);

  exit(1000);
}
