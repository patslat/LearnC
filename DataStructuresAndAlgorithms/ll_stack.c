#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


typedef struct
{
  int key;
  Stack *next;
} Stack;

void push(Stack *ps, int key)
{
  if(!ps->key) {
    ps->key = key;
    ps->next = NULL;
  }
  if(ps->next) {
    push(&ps->next, key);
  } else {
    Stack st;
    st->next = NULL;
    st->key = key;
    ps->next = st;
  }
}

int pop(Stack *ps)
{
  if(ps->next) {
    int key = ps->key;
    ps->key = ps->next->key;
    Stack *new_next = ps->next->next;
    ps->next = new_next;
    return key;
  }
}

int main(int argc, char *argv[])
{
  Stack st;
  int i;
  for(i = 0; i < 100; i++) {
    printf("Pushing: %d\n", i);
    push(&st, i);
  }

  int key;
  for(i = 0; i < 100; i++) {
    int key = pop(&st);
    printf("Popped: %d\n", key);
  }

  return 0;
}
