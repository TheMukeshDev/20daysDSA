#include <stdio.h>
int main()
{
    int num;
    int step=0;
    printf("enter the positive integer: ");
    scanf("%d",&num);
    while (num!=1)
    {
        if (num%2==0)
        {
            printf("num = %d\n",num);
            num=num/2;
            step=step+1;
        }
        else 
        {
            printf("num= %d\n",num);
            num=(num*3)+1;
            step=step+1;
        }
    }
 printf("total step=%d",step);
}