//c program to concatenate two string without using library functions
#include<stdio.h>
void main()
{
          char str1[10],str2[10],i,j=0;
          printf("Enter first string: ");
          gets(str1);
          printf("Enter second string: ");
          gets(str2);
             while (str1[i]!='\0')
                    {
                      str1[i]=str2[j];
                      i++;
                      j++;
                    }
          str1[i]='\0';
          printf("Concatenated string is: %s",str1);
}