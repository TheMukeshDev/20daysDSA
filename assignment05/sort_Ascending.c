#include <stdio.h>
void posNegSort(int arr[], int n)
{
//  bubble sort
    int i,j,temp; 
    for ( i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if ((arr[j]>0)&& (arr[i]>0) && arr[i]>arr[j] )
            {
                
            
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    for ( i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }

}
int main()
{
    int n;
    printf("enter the total size:");
    scanf("%d",&n);
    // int arr[5]={7,2,-3,-1,8};
    int arr[100]={0};
    int i;

    for ( i = 0; i < n; i++)
    {
        printf("enter the element: at M[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    posNegSort(arr,n);
    
}