#include <stdio.h>
int longestRun(int arr[],int size)
{
    int count=1;
    for (int i = 0; i < size-1; i++)
    {
       if (arr[i+1]-arr[i]==1 || arr[i+1]-arr[i]==-1)
       {
        count++;
       }

    }
    return count;

}
int main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the elements at index M[%d]: ",i);
        scanf("%d",&arr[i]);

    }
    printf("%d",longestRun(arr,n));

    
}