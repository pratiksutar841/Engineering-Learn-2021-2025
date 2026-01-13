//c program to add two number
#include<stdio.h>
void main()
{
          int a,b,*x,*y,sum=0;
          x=&a,y=&b;
          printf("Enter value of a , b : ");
          scanf("%d%d",&a,&b);
          sum=(*x)+(*y);
          printf("Sum of two numbers is %d",sum);
          return 0;
}