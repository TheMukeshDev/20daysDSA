#include <stdio.h>
#include <string.h>
void reverse(char arr[20]){
    strrev(arr);
    printf("reverse string : %s",arr);
}
int main()
{

    char arr[20];
    int size;

    printf("enter the max size of string:");
    scanf("%d",&size);

    printf("enter the string: ");
    scanf("%s",&arr);
    printf("actal string: %s \n",arr);
    reverse(arr);
    
    
}