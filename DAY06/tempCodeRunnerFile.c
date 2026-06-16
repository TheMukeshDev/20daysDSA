#include <stdio.h>
#include <string.h>
void merge(char arr[][20],int low, int mid,int high )
{
    int left ,right,k;
    char temp[][20];
    left=low;
    right=mid;
    k=low;
    while(left<=mid-1 && right<=high)
    {
        if (strcmp(arr[left],arr[right])>0)

        {
         strcpy(temp[k],arr[left]);
         left++;   
        }
        else{
            strcpy(temp[k],arr[right]);
            right++;
        }
        k++;
    }
    while (left<mid)
    {
        strcpy(temp[k],arr[left]);
        left++;
        k++;
        
    }
    while(right<=high)
    {
        strcpy(temp[k],arr[right]);
        right++;
        k++;
    }
    for (left=low; left<=high; left++)
    {
        strcpy(arr[left],temp[left]);
    }
}
void mergesort(char arr[][20], int low, int high)
{
    if(low <high)
    {
        int mid = (low + high) / 2;

        mergesort(arr, low, mid);
        mergesort(arr, mid+1 , high);

        merge(arr, low, mid +1, high);
    }
}
int main()
{
     int size;
    int i;
    printf("enter the size of array: ");
    scanf("%d",&size);
    char arr[size][20];
   
    printf("enter the %d elements: ",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%s",&arr[i]);
    }
    int low=0;
    int high=size-1;
    
    mergesort(arr,low,high);
    for ( i = 0; i < size; i++)
    {
        printf("%s ",arr[i]);
    }

}