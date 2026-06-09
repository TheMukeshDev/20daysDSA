#include <stdio.h>

int is_prime(int n){
        int i,is_prime;
        is_prime=1;
        for (i=2 ; i <= (n/2)+1; i++)
        {
            if (n%i==0)
            {
                is_prime=0;
                break;
            }
            
        }
        if (is_prime==1)
        {
          return 1;
        }
        else
        {
        return 0;
        }

}

int main()
{
 int n;
 printf("enter the last digit: ");
 scanf("%d",&n);
 for (int i=2 ;i<=n; i++)
 
 {
    if (is_prime(i)==1)
    {
        printf("%d is prime number\n",i);
    }
    else
    {
        printf("%d is not a prime number\n",i);
    }
 }

 
 }



