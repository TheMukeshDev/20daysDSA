#include <stdio.h>
int partition(char arr[],int low, int high)
{
    int pivot=arr[high];
    int i=low-1,j;
    char temp;
    for ( j= low; j<high; j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }

    }
    temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}
void quicksort(char arr[],int low ,int high)
{
    if (low<high)
    {
     int p=partition(arr,low,high);
     quicksort(arr,low,p-1);
     quicksort(arr,p+1,high);   
    }
}
int main(){
    char arr[100];
    int size;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter the %d elements :",size);
    for (int i = 0; i < size; i++)
    {
        scanf(" %c",&arr[i]);
    }
    int low=0;
    int high=size-1;
    quicksort(arr,low,high);
    for (int i = 0; i < size; i++)
    {
        printf("%c ",arr[i]);
    }

}