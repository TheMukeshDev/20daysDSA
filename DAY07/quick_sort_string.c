#include <stdio.h>
#include <string.h>

int partition(char arr[][20],int low, int high)
{
    char pivot[20];

    strcpy(pivot,arr[high]);
    int i=low-1,j;
    char temp[20];
    for ( j= low; j<high; j++)
    {
        if (strcmp(arr[j],pivot)<0)
        {
            i++;
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[j]);
            strcpy(arr[j],temp);

        }

    }
    strcpy(temp,arr[i+1]);
    strcpy(arr[i+1],arr[high]);
    strcpy(arr[high],temp);
    return i+1;
}
void quicksort(char arr[][20],int low ,int high)
{
    if (low<high)
    {
     int p=partition(arr,low,high);
     quicksort(arr,low,p-1);
     quicksort(arr,p+1,high);   
    }
}
int main(){

    int size;
    printf("enter the size of array: ");
    scanf("%d",&size);

    char arr[size][20];
    
    printf("enter the %d elements :",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%s",&arr[i]);
    }
    int low=0;
    int high=size-1;

    quicksort(arr,low,high);

    for (int i = 0; i < size; i++)
    {
        printf("%s ",arr[i]);
    }

}