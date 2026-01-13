//c program to read and print the element of array using pointer
#include<stdio.h>
void main()
{
          int a[10],n,i;
          printf("Enter the size of array: ");
          scanf("%d",&n);
          printf("Enter the elements of array: ");
               for(i=0;i<n;i++)
                  {
                    scanf("%d",(a+i));
                  }
          printf("Array elemets also :");
               for(i=0;i<n;i++)
                  {
                    printf("%d ",*(a+i));
                  }

}