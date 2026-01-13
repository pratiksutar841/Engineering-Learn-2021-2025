#include<stdio.h>
int main()
{
          int a[10],n,temp,i,j;
          printf("Enter the size of Arrays  = ");
          scanf("%d",&n);
          printf("Enter %d Numbers : n :",n);
              for (int i = 0; i < n; i++)
              {
                    scanf("%d",&a[i]);
              }
              for ( i = 0; i < n-1; i++)
              {
                  for ( j = 0; j < n-i-1; j++)
                  {
                    if (a[j]>a[j+1])
                    {
                       temp = a[j];
                       a[j]=a[j+1];
                       a[j+1]=temp;      
                    }                   
                  }                   
              }
            printf("Sorted Arrays List is \n ");
            for ( i = 0; i < n; i++)
            { 
               printf("%d\t",a[i]);    
            }
              
}