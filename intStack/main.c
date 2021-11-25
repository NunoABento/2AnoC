#include <stdio.h>
#include <assert.h>
#include "intstack.h"

int main(int argc, char const *argv[])
{
  IntStack myStack;
  int buf;
  init(&myStack, 10);
  if(isfull(&myStack)) return 1;
  push(&myStack, 12);
  if(isfull(&myStack)) return 1;
  push(&myStack, 23);
  if(isfull(&myStack)) return 1;
  push(&myStack, 31);
  if(isempty(&myStack)) return 1;
  buf = pop(&myStack);
  assert(buf==31);
  if(isempty(&myStack)) return 1;
  buf = pop(&myStack);
  assert(buf==23);
  if(isempty(&myStack)) return 1;
  buf = pop(&myStack);
  assert(buf==12);
  return 0;
}
