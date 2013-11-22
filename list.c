#include<stdio.h>

typedef struct Node Node;
struct Node{
  int x;
  Node *next;
};
void cons(Node *n,  Node **head)
{
  n->next=*head;
  *head=n;
}
void print(Node *head)
{
  Node *p;
  p = head;
  while(p!=NULL)
    {
      printf("%d ",p->x);
      p=p->next;
    }
  printf("\n");
}
int main()
{
  Node n = {3,NULL};
  Node m = {2,NULL};
  Node k = {1,NULL};
  Node *p=&n;
  cons(&m,&p);
  cons(&k,&p);
  print(p);

  printf("%d\n",n.x);
}
