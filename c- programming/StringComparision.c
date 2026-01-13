//c program to compare two string without using library functions
#include<stdio.h>
void main()
{
            char str1[100], str2[100],i,n;
            printf("Enter first string: ");
            scanf("%s",&str1);
            printf("Enter second string: ");
            scanf("%s",&str2);
                 while(str1[i]==str2[i])
                 {
                    i++;
                    if (str1[i]=='\0')
                    {
                              break;
                    }
                    
                 }
                 n=str1[i]-str2[i];
                 if(n==0)
                 {
                    printf("Both strings are equal");
                 }

                 else if(n>0)
                 {
                    printf("First string is greater than second string");
                 }
                 else
                 {
                    printf("First string is less than second string");
                 }

}