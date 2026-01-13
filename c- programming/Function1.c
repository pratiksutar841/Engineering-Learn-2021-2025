//c program to add two numbers using function
#include<stdio.h>
void main()
{
          int a,b,sum=0;
          printf("Enter first number: ");
          scanf("%d",&a);
          printf("Enter second number: ");
          scanf("%d",&b);
          sum= (a+b);
          printf("Sum of two numbers is: %d",sum);
}

int add(int x, int y)
{
          return(x+y);
}