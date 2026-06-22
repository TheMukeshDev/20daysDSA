#include <stdio.h>
#include <stdbool.h>
void check(int arr[],int size)
{
    bool is_ascending=true;
    bool is_descending=true;
    for (int i = 0; i < size-1; i++)
    {
        if(arr[i]<arr[i+1])
        {
            is_descending=false;
        
        }
        else if (arr[i]>arr[i+1])
        {
            is_ascending=false;
        
        }
        

    }
    if (is_ascending &&!is_descending)

    {
       printf("ascending "); 
    }
    else if (is_descending && !is_ascending)
    {
        printf("desending ");
    }
    else 
    {
       printf("neither "); 
    }
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
    check(arr,n);
}