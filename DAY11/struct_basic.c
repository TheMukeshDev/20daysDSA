#include <stdio.h>
struct Student
 {
    char name[45];
    int marks;
    int roll_num;
 };
int main()
{
struct Student s;
printf("enter the name of the student");
scanf("%s",&s.name);
printf("enter the marks of student ");
scanf("%d",&s.marks);
printf("enter the roll number ");
scanf("%d",&s.roll_num);
printf("name : %s \nmarks: %d\nroll number %d",s.name,s.marks,s.roll_num);

}