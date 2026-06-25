#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *address;
};
void main()
{
 struct Node *current, head =NULL,*temp;
 int i ,n;
 printf("enter the no of elments ");
 scanf("%d",&n);
 for (i = 0; i < n; i++)
 {
    printf("enter the number : ");

    current= (struct Node *)malloc(sizeof(struct Node));
     scanf("%d",&current->data);
 

 }

 
if (head=NULL)
{
    head=current->address;
}
else
{
    temp=head;
    while (temp->address==NULL)
    {
        temp->address=current->address;
    }
}
for (int i = 0; i < n; i++)
{
    printf(" elements : %d\n address %d",current[i].data,current[i].address);
}
}