#include<stdio.h>
int main()
{
    int i=0,n,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
       do
       {
        sum=sum+i;
        i++;
       }while(i<=n);

       printf("sum is%d",sum);
    return 0;
}
