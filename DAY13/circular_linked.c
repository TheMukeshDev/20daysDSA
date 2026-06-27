#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    // struct Node *prev;
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
        
        current->next=NULL;
        printf("enter the number");
        scanf("%d",&current->data);
        if (head==NULL)
        {
            head=current;
            tail=current;
            tail->next=head;            
        }
        else
        {
            tail->next=current;
            current->next=head;
            tail=current;
        }
    }
    
    temp=head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    
    }
    
    while (temp!=head);

}