#include<stdio.h>
void main()
{
    int a[10],n,i,key,found=0;
    printf("Enter the size of Array = ");
    scanf("%d",&n);
    printf("Enter the %d Array Element = ",n);
           for ( i = 0; i < n; i++)
           {
             scanf("%d",&a[i]);
           }
    printf("Enter key element to be searched = ");
    scanf("%d",&key);
            for ( i = 0; i < n; i++)
            {
                 if (a[i]==key)
                 {
                    found=1;
                    break;
                 }
            }
            if (found==1)
            {
                    printf("Search is successful");
            }
            else
            {
                   printf("Search is unsuccessful");
            }
}