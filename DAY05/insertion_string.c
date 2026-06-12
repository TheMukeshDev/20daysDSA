#include <stdio.h>
#include <string.h>

int main(){
    char arr[100][20];
    int i,j,n;
    char k[20];
    
    printf("enter the size of arr:");
    scanf("%d",&n);


    for ( i = 0; i < n; i++)
    {
        printf("enter the string: at M[%d]: ",i);
        scanf(" %s",&arr[i]);
    }
    //  insertion sort 
    for(i=1;i<n;i++){
        strcpy(k,arr[i]);
        j=i-1;
        while (j>=0&& strcmp(arr[j],k)>0)
        {
            strcpy(arr[j+1],arr[j]);
            j--;
        }
        strcpy(arr[j+1],k);
    }

    //  print sorted arr
    for ( i = 0; i <n; i++)
    {
        printf("%s ",arr[i]);
    }

    

}