//c program to copy one string to another without using library functions
#include<stdio.h>
void main()
{
          char str1[10]="VSMIT";
          char str2[10];
          int i = 0;
          while(str1[i]!='\0')
          {
                    str2[i]=str1[i];
                    i++;
          }
          printf("copied string = %s\n", str2);
}