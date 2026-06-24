#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr , i , n, n2;
    printf("enter the size of pointer ");
    scanf("%d",&n);
    // ptr=(int *)(malloc(n*sizeof(int)));
    ptr=(int *)(calloc(n,sizeof(int)));
    for ( i = 0; i < n; i++)
    {
        printf("enter the elements of PTR[%d]",ptr[i]);
        scanf("%d",&ptr[i]);

    }
    printf("enter the new size  ");
    scanf("%d",&n2);
    ptr=(int *)(realloc(ptr,n2*sizeof(int)));
    if (n2>n)
    {
      for ( i = n; i < n2; i++)
    {
        printf("enter the elements of PTR[%d]",ptr[i]);
        scanf("%d",&ptr[i]);

    }  
    }
    for ( i = 0; i < n2; i++)
    {
        
        printf("%d",ptr[i]);

    }


}