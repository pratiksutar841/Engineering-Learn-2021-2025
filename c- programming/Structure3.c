//Array of Structure
//Array inside structure
#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks[3];      
};
void main()
{
     struct student s[10];
     int n,i;
     printf("\n\nEnter number of student : ");
     scanf("%d",&n);
     for ( int i = 1; i < n; i++)
     {
        printf("\nEnter student Details %d \n",i);
        printf(" Roll_no = ");
        scanf("%d",&s[i].roll_no); 
         printf(" Name = ");
        scanf("%s",s[i].name); 
         printf(" Marks = ");
        scanf("%f",&s[i].marks); 
         
     }
     
}
