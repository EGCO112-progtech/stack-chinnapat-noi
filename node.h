//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    char data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

/*void kai(NodePtr* top, int x)
{
  NodePtr new_node=(NodePtr)malloc(sizeof(Node));
  if(new_node){
    new_node->data=x;
    new_node->nextPtr=*top;
    *top=new_node;
  }
}
int ka(NodePtr* top)
{
  NodePtr t = *top;
  if(t){
  int value= t->data;
  *top=t->nextPtr;
  free(t);
  return value;
    }
  printf("Empty Stack");
  return 0;
}*/
#endif
