//c program to find factorial of number using recursion
#include<stdio.h>
void main()
{
          int n,f;
          printf("Enter value n : ");
          scanf("%d",&n);
          f=fact(n);
          printf("Factorial of %d is %d",n,f);
}
int fact(int n)
{

          if(n==0||n==1)
          {
          return 1;
          }
          else
          {
          return(fact(n-1)*n);
          }

}