#include<stdio.h>
#include<string.h>
int main()
{
          char*str;
    
          str=(char*)malloc(20*sizeof(char));
          printf("Value of Memory %s",str);
                if (str==NULL)
                {
                    printf("No Memory Allocation");
                }
                else
                {
                    Strcpy(str,"c-Programming");
                    printf("Stored value at memory = %s\n",str);
                }
                
}