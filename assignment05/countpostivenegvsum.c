#include <stdio.h>
int* countPosSumNeg(int arr[], int size)
{
    int count=0;
    int sum=0;
    static int RESULT[2];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
        else{
            sum=sum+arr[i];

        }
    }
    
    RESULT[0]=count;
    RESULT[1]=sum;
    return RESULT;

 

}
int main()
{
    // int arr[10]={1,2,3,5,-7,-9,11,-33,-1,-11};
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the elements at index M[%d]",i);
        scanf("%d",&arr[i]);

    }
    int *result =countPosSumNeg(arr,n);
    printf("[%d %d]",result[0],result[1]);


    }