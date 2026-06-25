#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *address;
};
void main()
{
 struct Node *c;
 c= (struct Node *)malloc(3*sizeof(int));
 printf("enter the element : ");
 scanf("%d",&c->data);
 c->address=NULL;
 printf(" elements : %d\n address %d",c->data,c->address);

}