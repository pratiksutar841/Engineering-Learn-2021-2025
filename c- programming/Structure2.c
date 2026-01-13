//Array with Structure
//Array inside structure
#include<stdio.h>
struct  student
{
    int roll_no;
    char name[20];
    float marks[3];      
};
void main()
{
     struct student a;
     printf("Enter  roll_no of student a : ");
     scanf("%d",&a.roll_no);
     printf("Enter name of student a : ");
     scanf("%s",a.name);
     printf("Enter marks of student a : ");
     scanf("%f%f%f",&a.marks[0],&a.marks[1],&a.marks[2]);
     printf("Details of student");
     printf("\n Roll_no : %d",a.roll_no);
     printf("\n Name : %s",a.name);
     printf("\n 1st Marks : %f",a.marks[0]);
     printf("\n 2nd Marks : %f",a.marks[1]);
     printf("\n 3rd Marks : %f",a.marks[2]);
}
