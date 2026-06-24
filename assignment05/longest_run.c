    #include <stdio.h>
    int longestRun(int arr[],int size)
    {
        int count=1;
        int a=0;
        int b=0;
        int count2=1;
        // 
        for (int i = 0; i < size-1; i++)
        {
            if (arr[i]<arr[i+1])
        {
                
            
        if (arr[i+1]-arr[i]==1 )
        {
            count++;
        }
        else
        {
            count=1;
            if (a>count)
            {
                a=count;
            }
        }
        }

        else if (arr[i]>arr[i+1])
        {
        if (arr[i+1]-arr[i]==-1 )
        {
            count2++;
        }
        else
        {
            count2=1;
            if (b>count2)
            {
                b=count2;
            }
        }
        }
    }

        
        if (a<=b)

        {
        return b;    
        }
        else if (a>=b)
        {
        return a; 
        }
        else
        {
            return 1;
        }

    }
    int main()
    {

        int n;
        printf("Enter the size of array: ");
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            printf("enter the elements at index M[%d]: ",i);
            scanf("%d",&arr[i]);

        }
        printf("%d",longestRun(arr,n));

        
    }