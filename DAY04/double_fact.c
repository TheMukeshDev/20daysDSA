#include <stdio.h>
int double_fact(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
         return n*double_fact(n-2);
    }
}
int main()
{
    int n;
    printf("enter the last digit: ");
    scanf("%d",&n);
    printf("%d",double_fact(n));
}