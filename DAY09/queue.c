#include <stdio.h>
#define size 6

int queue[size-1];
int rear=-1;
int front=-1;
void enqueue()
{
    if (rear>size-1)
    {
        printf("queue overflow ");
    }
    else
    {
        int d;
        printf("enter the elements: ");
        scanf("%d",&d);
        rear=rear+1;
        queue[rear]=d;
    }
    if (front==-1)
    {
        front=0;
    }


}
void dequeue()
{
    if (front==-1 || front>rear)
    {
        printf("stack is underflow");
    }
    else
    {
        printf("%d element is deleted ",queue[front]);
        front=front+1;
    }

}

void display()
{
    if (front=1)
    {
        printf("queue is underflow");
    }
    else
    {
        int i=front;
        while (1)
        {
            printf("%d ",queue[i]);
            if (i==rear)
            {
                break;
            }
            i=(i+1)%size;
        }
    }
}

int main(){
    int c;
    while (true)
    {
        
        printf("\n1-for Enqueue\n2-for Dequeue\n3-for display\n4-for exit\nEnter your Choise: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;  
        case 4:
            return 0;
        default:
            printf("inavlid input");
            // break;
        }
    }
} 