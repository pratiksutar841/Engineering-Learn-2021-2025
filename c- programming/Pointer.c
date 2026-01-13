#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=70;
    int*ptr=&a;
    printf("The value of a is %d\n",*ptr);
    
    return 0;
}
