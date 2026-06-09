#include <stdio.h>
int main()
{
    
    int element[20]={0};
    int n=10;
    
    for (int i = 0; i <n; i++)
    {
        printf("enter the element %d: ",i);
        scanf("%d",&element[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",element[i]);
    }
    
}