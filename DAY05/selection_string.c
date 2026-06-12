#include <stdio.h>
#include <string.h>

int main(){
    char arr[100][20];
    int i,j,n;
    int min;
    char temp[20];
    
    printf("enter the size of arr:");
    scanf("%d",&n);


    for ( i = 0; i < n; i++)
    {
        printf("enter the element: at M[%d]: ",i);
        scanf(" %s",&arr[i]);
    }
    //  selection sort 
    for ( i = 0; i < n; i++)
    {
        min=i;
        for (j = i;j<n; j++)
        {
            if (strcmp(arr[min],arr[j])>0)
            {
              min=j;
            }
        }
        strcpy(temp,arr[min]);
        strcpy(arr[min],arr[i]);
        strcpy(arr[i],temp);

    }
    //  print sorted arr
    for ( i = 0; i <n; i++)
    {
        printf("%s ",arr[i]);
    }

    

}