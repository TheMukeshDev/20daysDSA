#include <stdio.h>
#define size 6

int dequeue[size-1];
int rear=-1;
int front=-1;
void insertfromfront()
{
    if ((front==0 &&rear==size-1)|| (front<=rear))
    {
        printf("dequeue overflow ");
    }
    else
    {
         if (front==-1)
    {
        front=size-1;
    }
        int d;
        printf("enter the elements: ");
        scanf("%d",&d);
        
        dequeue[front]=d;
        front--;
    }
   


}
void insertfromrear()
{
    if ((front=0 &&rear==size-1)|| (front<=rear))
    {
        printf("dequeue overflow ");
    }
    else
    {
         if (front==-1 && rear==-1)
    {
        front=rear=0;
    }
        int d;
        printf("enter the elements: ");
        scanf("%d",&d);
        
        dequeue[rear]=d;
        rear--;
    }
   


}
void delfromfront()
{
    if ((front==-1  && rear==-1)|| (rear==-1 && front==size-1))
    {
        printf("deque is underflow");
    }
    else
    {
        printf("%d element is deleted ",dequeue[front]);
        front=front+1;
    }

}

void delfromrear()
{
    if ((front==-1  && rear==-1)|| (rear==-1 && front==size-1))
    {
        printf("deque is underflow");
    }
    else
    {
        printf("%d element is deleted ",dequeue[rear]);
        rear=rear+1;
    }

}

void display()
{
    int i;
    if ((front==-1 && rear==-1)|| (front+1>rear))
    {
        printf("deque is empty");
    }
    else
    {
        for (int i = front+1 ;  i < rear ; i++)
        {
            printf("%d  ",dequeue[i]);
        }
    }
}

int main(){
    int c;
    while (true)
    {
        
        printf("\n1-for insert from rear\n2-for insert from front\n3-for delete from rear\n4-for delete from front\n5 for display\n6 for exit\nEnter your Choise: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            insertfromrear();
            break;
        case 2:
            insertfromfront();
            break;
        case 3:
            delfromrear();
            break;  
        case 4:
            delfromfront();
        case 5:
            display();
        case 6:
            return 0;
        default:
            printf("inavlid input");
            // break;
        }
    }
} 