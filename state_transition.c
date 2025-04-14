#include "main.h"

enum ProcessState { NEW, READY, RUNNING, WAITING, TERMINATED };

typedef struct {
  int pid;
  enum ProcessState state;
  int priority;
} PCB;

void transition_state(PCB *process, enum ProcessState new_state) {
  printf("Transition process: %d of state: %d to new state: %d\n", process->pid,
         process->state, new_state);
  process->state = new_state;
}

int main() {
  PCB process;
  process.pid = getpid();
  process.state = NEW;
  process.priority = 5;

  transition_state(&process, READY);
  transition_state(&process, WAITING);
  transition_state(&process, RUNNING);
  transition_state(&process, TERMINATED);
}
