#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define STACKSIZE 128

typedef struct
{
  size_t size;
  int items[STACKSIZE];
} STACK;

void die(const char *message)
{
  if(errno) {
    perror(message);
  } else {
    printf("ERROR: %s\n", message);
  }

  exit(1);
}

void push(STACK *ps, int x)
{
  if(ps->size == STACKSIZE) {
    die("Error: stack overflow\n");
  } else {
    ps->items[ps->size++] = x;
  }
}

int pop(STACK *ps)
{
  if(ps->size == 0) {
    die("Error: stack underflow\n");
  } else {
    return ps->items[--ps->size];
  }
}

int main(int argc, const char *argv[])
{
  return 0;
}
