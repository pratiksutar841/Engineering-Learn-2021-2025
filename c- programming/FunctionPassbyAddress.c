//c program to swap two number using pass by address
#include<stdio.h>
void main()
{
          int a,b;
          printf("Enter the value of a & b: ");
          scanf("%d%d",&a,&b);
          printf("Value of a,b before swapping %d %d\n",a,b);
          swap(&a,&b);
          printf("Value of a,b after swapping %d %d\n",a,b);
}         
swap(int *a, int *b)
{
          int temp;
          temp=*a;
          *a=*b;
          *b=temp;
}