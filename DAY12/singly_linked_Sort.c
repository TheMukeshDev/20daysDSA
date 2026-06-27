#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *address;
};
void main()
{
 struct Node *current=NULL, *head =NULL,*temp;
 int i ,j,n;
 printf("enter the no of elments ");
 scanf("%d",&n);
 for (i = 0; i < n; i++)
 {
    

    current= (struct Node *)malloc(sizeof(struct Node));
    printf("enter the number : ");
    scanf("%d",&current->data);
 

 
    current->address=NULL;
 
    if (head==NULL)
    {
    head=current;
    }
    else
    {
    temp=head;
    while (temp->address!=NULL)
    {
        temp=temp->address;
    }
    temp->address=current;
}
 }
temp=head;
    
while (temp!=NULL)
    {
        
        if (ptr->data<temp->data)
        {
         int j=ptr->data;
         ptr->data=temp->data;
         temp->data=j;
        }
        ptr=ptr->address;

}
 temp=temp->address;
}