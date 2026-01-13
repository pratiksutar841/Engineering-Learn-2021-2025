//c program to reversing string without using library functions
#include<stdio.h>
void main()
{
            char a[10],b[10],i,j;
            printf("Enter the string: ");
            scanf("%s",a);
            i=0;
            while (a[i]!='\0')
            i++;
            j=0;
            while(i>=0)
            {
                    b[j]=a[i];
                    j++;
                    i++;
            }
            printf("Reversed string: %s",b);
            
}