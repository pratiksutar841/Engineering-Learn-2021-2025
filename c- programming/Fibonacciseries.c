//c program to find fibonacci series
#include<stdio.h>
void main()
{
          int n,i=0,c;
          printf("Enter the number of elements: ");
          scanf("%d",&n);
          printf("Fibonacci series:");
              for(c=1;c<=n;c++)
              {
                    printf("%d ",fib(i));
                    i++;
              }     
}
int fib(int n)
{
    if(n==0)
    {
       return 0;
    }
    else if(n==1)
    {
       return 1;
    }
    else
    {
       return fib(n-1)+fib(n-2);
    }
} 