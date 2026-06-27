#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
    
};

int main()
{
 
    struct Node *current, *temp,*head=NULL ,*tail=NULL;
    int i ,n;
    printf("enter the size of array:");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        current=(struct Node *)(malloc(sizeof(struct Node)));
        current->prev=NULL;
        current->next=NULL;
        printf("enter the number");
        scanf("%d",&current->data);
        if (head==NULL)
        {
            head=current;
            tail=current;
        }
        else
        {
            tail->next=current;
            current->prev=tail;
            tail=current;
        }
    }
    // temp=head;
    // while (temp!=NULL)
    // {
    //    printf("%d",temp->data);
    //    temp=temp->next; 
    // }
    temp=tail;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }

}