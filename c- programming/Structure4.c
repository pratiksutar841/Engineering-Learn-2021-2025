//C programming to show  hoe structure behavior
#include<stdio.h>
int main()
{
          typedef struct
          {
                    int marks;
                    char grade;
                    float percentage;
          }STUDENT;
          STUDENT cse;
          cse.marks =100;
          cse.grade ='A';
          cse.percentage =99.5;
          printf("marks = %d\n", cse.marks);
          printf("grade = %f\n", cse.grade);
          printf("percentage = %f\n", cse.percentage);
}