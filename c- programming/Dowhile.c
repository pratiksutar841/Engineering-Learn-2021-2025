#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=0,n,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
       while(i<=n)
       {
        sum=sum+i;
        i++;
       }
       printf("sum is%d",sum);
    return 0;
}
