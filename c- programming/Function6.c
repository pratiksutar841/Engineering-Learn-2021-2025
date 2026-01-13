//c program to add and subtract two number
#include<stdio.h>
void main()
{
          int a,b,sum,diff;
          printf("Enter the first number: ");
          scanf("%d",&a);
          printf("Enter the second number: ");
          scanf("%d",&b);

          operation(a,b,&sum,&diff);
          printf("Sum of the two numbers is: %d\n",sum);
          printf("Difference of the two numbers is: %d",diff);
}
operation(int x, int y, int *sum, int *diff)
{
          *sum=x+y;
          *diff=x-y;
}