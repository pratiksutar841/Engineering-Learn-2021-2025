//c program to swap two number using pointer
#include<stdio.h>
void main()
{
          int a,b,*x,*y;
          printf("\nEnter value of a , b = ");
          scanf("%d%d",&a,&b);
           x=&a; y=&b;
           printf("\nBefore swapping a=%d, b=%d ",*x,*y);
           swap(&a,&b);
           printf("\nAfter swapping a=%d, b=%d ",*x,*y);
}
swap(int *a,int *b)
{
          int temp;
          temp=*a;
          *a=*b;
          *b=temp;
}