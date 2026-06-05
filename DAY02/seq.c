#include <stdio.h>

int triangle(int num);
int main()
{
int num=0;
printf("enter the number triangle ");
scanf("%d",&num);

printf("%d",triangle(num));
}
int triangle(int num)
{
    if (num==1)
    {
        return 1;
    }
    else{
        return num + triangle(num-1);
    }
}
