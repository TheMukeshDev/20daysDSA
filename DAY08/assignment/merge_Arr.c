#include <stdio.h>

int partition(int arr[],int low, int high)
{
    int pivot=arr[high];
    int i=low-1,j,temp;
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

void quicksort(int arr[],int low ,int high)
{
    if (low<high)
    {
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);   
    }
}
int input_element(int arr[], int size){
    
    printf("enter the %d elements :",size);
    for (int i = 0; i <size ; i++)
    {
        scanf("%d",&arr[i]);
    }
}
int display_asc_array(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}
int display_desc_array(int arr[],int size)
{
    for (int i = size-1; i >=0; i--)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[20];
    int arr2[20];
    int i;
    int combine_arr[40];
    int size;
    printf("enter the size of array: ");
    scanf("%d",&size);
    input_element(arr,size);
    
    input_element(arr2,size);
    

    int k=0;
    for (int i = 0; i < size; i++)
    {
        combine_arr[k]=arr[i];
        k++;
        combine_arr[k]=arr2[i];
        k++;
    }
    // for (int i = 0; i < k; i++)
    // {
    //     printf("%d",combine_arr[i]);
    // }

    // printf("%d",k);
    int low=0;
    int high=size*2-1;
    // for ( i = 0; i <size; i++)
    // {
        
    // }
    quicksort(combine_arr,low,high);


    int check_order=arr[1]-arr[0];

    if (check_order>=0)
    {
        display_asc_array(combine_arr,size*2);
        return 0;
    }
    else{
        display_desc_array(combine_arr,size*2);
        return 0;
    }
    
    
}