#include <stdio.h>
int findHighest(int arr[],int n){
    int highest=arr[0];
    for (int i=0; i < n; i++)
    
    {
        if (arr[i]>highest)
        {
            highest=arr[i];
        }
        
    }
    return highest;
}
int main(){
    int arr[10]={0};
    int s;
    printf("enter the size of array: ");
    scanf("%d",&s);
    for (int i = 0; i < s; i++)
    {
        printf("enter  sorted element of m[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("highest element : %d",findHighest(arr,s));

}