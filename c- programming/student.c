#include<stdio.h>
struct student
{
          int roll_no;
          char name[10];
          float marks; /* data */
};

void main()
{
          struct student s[10];
          int n,i;
          printf("Enter the total no. of student\n");
          scanf("%d",&n);

            for ( i = 0; i < n ; i++)
            {
                  printf("Enter the details of student \n");
                  printf("Roll No\nName\nMarks\n");
                  scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].marks);  /* code */
            }
            for ( i = 0; i < n; i++)
            {
                    printf("Details of student %d\n",i+1);
                  printf("%d %s %f",s[i].roll_no,s[i].name,s[i].marks);/* code */
            }         
}
