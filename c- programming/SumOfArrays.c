//Sum of arrays
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10][10],i,j,n,m,sum=0;
    printf("Enter the size of array:");
    scanf("%d%d",&n,&m);
    printf("Enter element of an array");
      for(i=0;i<n;i++)
         {
            for(j=0;j<m;j++)
            {
            scanf("%d",&a[i][j]);
            }
         }
      for(i=0;i<n;i++)
         {
            for(j=0;j<m;j++)
            {
                sum=sum+a[i][j];
            }
         }   
         printf("The sum of n  number is %d",sum);
    return 0;
}
