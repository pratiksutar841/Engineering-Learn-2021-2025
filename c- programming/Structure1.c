/* Example program to declare a structure
   read its value & display the same */
#include<stdio.h>
struct student
   {
    int roll_no;
    char name[20];
    float marks;
   };
 void main()
 {
          struct student a,b;
          printf("Enter the a's roll no: ");
          scanf("%d",&a.roll_no);
          printf("Enter the a's  name: ");
          scanf("%s",a.name);
          printf("Enter the a's marks: ");
          scanf("%f",&a.marks);
          

          printf("Enter b's Details");

          scanf("%d%s%f",&b.roll_no,b.name,&b.marks);
          printf("\n\n");
          printf("The details of a are");
          printf("\nRoll_no=%d\nName=%s\nMark=%f\n",a.roll_no,a.name,a.marks);
          printf("\n\n");
          printf("The details of b are");
          printf("\nRoll_no=%d\nName=%s\nMark=%f\n",b.roll_no,b.name,b.marks);
 }  

