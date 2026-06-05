#include <stdio.h>
int main()
{
    int number=7217;
    int new_num=0;
    int orignal=number;
    while (number>0)
    {
       new_num=new_num*10+number%10;
       number = number / 10;
    }
    if (orignal==new_num)
    {
        printf("palindrome num");
    }
    else
    {
        printf("not a palindrome num");
    }
}