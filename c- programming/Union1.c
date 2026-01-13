//C programming on how union behaves
#include<stdio.h>
int main() 
{
          typedef union
          {
            int marks;
            char grade;
            float percentage;
          }Students;
          Students cse;
          cse.marks =100;
          printf("Marks = %d\n",cse.marks);
          cse.grade ='A';
          printf("Grade = %c\n",cse.grade);
          cse.percentage =99.5;
          printf("Percentage = %f\n",cse.percentage);
}