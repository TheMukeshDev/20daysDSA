#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char data[30];
    struct Node *address;
};
void main()
{
 struct Node *current=NULL, *head =NULL,*temp;
 int i ,n;
 printf("enter the no of elments ");
 scanf("%d",&n);
 for (i = 0; i < n; i++)
 {
    

    current= (struct Node *)malloc(sizeof(struct Node));
    printf("enter the string : ");
    scanf("%s",&current->data);
 

 
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
        

        printf("%s\n",temp->data);
        temp=temp->address;

}
}