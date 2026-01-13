//c program to find the length of the without using library functions.
#include<stdio.h>
void main()
{
          char str[10],i=0;
          printf("Enter value of String = ");
          gets(str);
           while (str[i]!='\0')
           {
              i++;
           }
           printf("Length of without using library functions is %d",i);
}