
#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtr s, char value)
{
   NodePtr new_node=(NodePtr)malloc(sizeof(Node));
  if(new_node){
    new_node->data=value;
    new_node->nextPtr=s->top;
    s->top=new_node;
  s->size++;
}
  }
int pop(StackPtr s)
{
  NodePtr t = s->top;
  if(t){
  char value= t->data;
  s->top=t->nextPtr;
  s->size--;
  free(t);
  return value;
    }
}

void pop_all(StackPtr s)
{
  while(s->size>0){
  printf("%d",pop(s));
    }
}
#endif
