#include <stdio.h>
#include <assert.h>
#include "intqueue.h"

int main(int argc, char const *argv[])
{
  IntQueue myQueue;
  int buf;
  init(&myQueue, 10);
  if(isfull(&myQueue)) return 1;
  push(&myQueue, 12);
  if(isfull(&myQueue)) return 1;
  push(&myQueue, 23);
  if(isfull(&myQueue)) return 1;
  push(&myQueue, 31);
  if(isempty(&myQueue)) return 1;
  buf = pop(&myQueue);
  assert(buf==12);
  if(isempty(&myQueue)) return 1;
  buf = pop(&myQueue);
  assert(buf==23);
  if(isempty(&myQueue)) return 1;
  buf = pop(&myQueue);
  assert(buf==31);
  return 0;
}
