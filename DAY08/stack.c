#include <stdio.h>
#define size 6
int stack[size-1];
int top=-1;

void push(){
    if (top>size-1)
    {
        printf("stack overflow ");
    }
    else
    {
        int d;
        scanf("%d",&d);
        top=top+1;
        stack[top]=d;
    }

}
void pop()
{
    if (top==-1)
    {
        printf("stack is underflow");
    }
    else
    {
        printf("%d element is deleted ",stack[top]);
    }

}
void display()
{
    int i;
    if (top==-1)
    {
        printf("stack is underflow");
    }
    else
    {
        for (int i = 0 ;  i <= top; i++)
        {
            printf("\n%d ",stack[i]);
        }
    }
}

int main(){
    int c;
    while (true)
    {
        
        printf("\nEnter 1-for push 2-for pop 3-for display 4-for exit");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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