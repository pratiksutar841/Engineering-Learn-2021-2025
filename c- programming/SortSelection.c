#include<stdio.h>            // Selection sorting
void main()
{
          int a[10],n,i,j,min=0,temp;
          printf("Enter the size of arrays = ");
          scanf("%d",&n);
          printf("Enter the %d Array element =",n);
                 for ( i = 0; i < n ; i++)
                 {
                    scanf("%d",&a[i]);
                 }
                 for ( i = 0; i < n ; i++)
                 {
                    min=i;
                    for (j = i+1; j < n; j++)
                    {
                        if (a[j]<a[min])
                        {
                              min=j;
                        }
                        temp=a[i];
                        a[i]=a[min];
                        a[min]=temp;
                    }
                 }
                 printf("Sorted Arrays are = ");
                       for ( i = 0; i < n ; i++)
                       {
                              printf(" %d\t ",a[i]);
                       }
}