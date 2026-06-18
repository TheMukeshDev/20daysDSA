#include <stdio.h>
#include <string.h>
void merge(char arr[][20],int low, int mid,int high )
{
    int left ,right,k;
    char temp[100][20];
    left=low;
    right=mid;
    k=low;
    while(left<=mid-1 && right<=high)
    {
        if (strcmp(arr[left],arr[right])<0)

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
    printf("Enter the size of array:");
    scanf("%d",&size);
    char arr[size][20];
    char new_Arr[size*2][20];
    int i;
    int k=0;
    printf("enter the elements");

    for (int i = 0; i < size; i++)
    {
        scanf("%s",&arr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
       int len=strlen(arr[i]);
       int mid=len/2;
       strncpy(new_Arr[k],arr[i],mid);
       k++;
       strcpy(new_Arr[k],arr[i]+mid);
       k++;
    }
    int low=0;
    int high=size*2-1;

    mergesort(new_Arr,low,high);
     for (int i = 0; i < size*2; i++)
    {
        printf("%s ",new_Arr[i]);
    }

}