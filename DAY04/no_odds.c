#include <stdio.h>
int noOdds(int arr[],int n){
    int arr2[10]={0};
    for (int i=0; i < n; i++)
    
    {
        if (arr[i]%2==0)
        {
            arr2[i]=arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr2[i]!=0)
        {
            printf("%d",arr2[i]);
        }
        
    }
}
int main(){
    int arr[10]={0};
    int s;
    printf("enter the size of array: ");
    scanf("%d",&s);
    for (int i = 0; i < s; i++)
    {
        printf("enter element of m[%d]",i);
        scanf("%d",&arr[i]);
    }
    noOdds(arr,s);

}