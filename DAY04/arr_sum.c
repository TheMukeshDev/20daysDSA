#include <stdio.h>
int sum(int arr[] , int s){
    int sum=0;
    for (int i = 0; i < s; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[10]={0};
    int s;
    printf("enter the size of array");
    scanf("%d",&s);
    for (int i = 0; i < s; i++)
    {
        printf("enter element of m[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("sum of array is : %d",sum(arr,s));

}