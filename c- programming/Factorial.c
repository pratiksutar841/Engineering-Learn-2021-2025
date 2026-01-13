#include<stdio.h>
#include<math.h>
int main()
{
    int n,f;
    printf("Enter the number\n");
    scanf("%d",&n);
     f=fact(n);
     printf("factorial of %d is %d",n,f);
}
int fact(int n)
{
if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return(n*fact(n-1));

    }

    return 0;
}
