#include <stdio.h>
int main()
{
    
    int element[20]={0};
    int n=10;
    int even=0;
    int odd=0;
    
    for (int i = 0; i <n; i++)
    {
        printf("enter the element %d: ",i);
        scanf("%d",&element[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(element[i]%2==0)
        {
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("even =%d odd=%d",even,odd);
    
}