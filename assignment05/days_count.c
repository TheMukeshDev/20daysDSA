#include <stdio.h>
int days(int year, int month)
{
    int is_leap=1;
    if (year%400==0)
    {
        is_leap=0;
    }
    else if (year%100==0)
    {
        is_leap=1;
    }
    else if (year%4==0)
    {
        is_leap=0;
    }
    else
    {
        is_leap=1;
    }
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 2:
        if (is_leap==0)
        {
           return 29; 
        }
        else
        {
            return 28;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        break;
    }
}
int main(){
    int year;
    int month;
    printf("enter the year :");
    scanf("%d",&year);
    printf("enter the month: ");
    scanf("%d",&month);
    int result=days(year,month);
    printf("Total days : %d",result);

}