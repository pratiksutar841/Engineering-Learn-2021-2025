#include<stdio.h>
struct employee;
{
    int id;
    char name[20];
    int sal[20];      
} E[20],n,i;

void main()
{
          struct employee E[10];
          int n,i;
          printf("Enter the number of Employee");
          scanf("%d",&n);

          printf("Enter the information of %d Employee",n);
              
               for ( i = 0; i < n; i++)
               {
                    scanf("%d %s %d",&E[i].id,E[i].name,&E[i].sal);
               }
               printf("Employee information");
               printf("Employee ID\n Employee name/n Employee salary");
                  
                   for ( i = 0; i < n; i++)
                   {
                         printf("%d %s %d",E[i].id,E[i].name,E[i].salary);            
                   }              
}

