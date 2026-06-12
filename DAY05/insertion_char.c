#include <stdio.h>

int main(){
    char arr[100]={0};
    int i,j,n,k;
    
    printf("enter the size of arr:");
    scanf("%d",&n);


    for ( i = 0; i < n; i++)
    {
        printf("enter the element: at M[%d]: ",i);
        scanf(" %c",&arr[i]);
    }
    //  insertion sort 
    for(i=1;i<n;i++){
        k=arr[i];
        j=i-1;
        while (j>=0&&arr[j]>k)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }

    //  print sorted arr
    for ( i = 0; i <n; i++)
    {
        printf("%c ",arr[i]);
    }

    

}