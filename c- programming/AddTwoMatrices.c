//c program to add two matrices
#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],c[10][10],sum=0,i,j,n,m;
  printf("Enter the value of m and n");
  scanf("%d%d",&m,&n);
  printf("Enter value of array element : ");
       for ( i = 0; i < m; i++)
       {
          for (j = 0; j < n; j++)
          {
             scanf("%d%d",&a[i][j]);
          }
       }
  printf("Enter element of array : ");
       for ( i = 0; i < m; i++)
       {
          for ( j = 0; j < n; j++)
          {
            scanf("%d%d",&b[i][j]);
          }
       }
       for ( i = 0; i < m; i++)
       {
          for ( j = 0; j < n; j++)
          {
            c[i][j]=a[i][j]+b[i][j];
          }
       }
       printf("Resulatant matrix is :");
       for ( i = 0; i < m; i++)
       {
          for ( j = 0; j < n; j++)
          {
            printf("%d",c[i][j]);
          }
       }
}