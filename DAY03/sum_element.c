#include <stdio.h>
int main()
{
    
    int element[20]={0};
    int n=6;
    int sum=0;
    
    for (int i = 0; i <n; i++)
    {
        printf("enter the element %d: ",i);
        scanf("%d",&element[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+element[i];
    }
    printf("sum of 6 numbers is %d",sum);
    
}