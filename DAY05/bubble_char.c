#include <stdio.h>

int main(){
    char arr[100]={0};
    int i,j,n,temp;
    
    printf("enter the size of arr:");
    scanf("%d",&n);


    for ( i = 0; i < n; i++)
    {
        printf("enter the element: at M[%d]: ",i);
        scanf(" %c",&arr[i]);
    }
    //  bubble sort 
    for ( i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                
            
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;}
        }
    }
    //  print sorted arr
    for ( i = 0; i <n; i++)
    {
        printf("%c ",arr[i]);
    }

    

}