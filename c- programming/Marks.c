#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks[3];
    printf("Enter the physics:");
    scanf("%d",&marks[0]);
    printf("Enter the chemistry:");
    scanf("%d",&marks[1]);
    printf("Enter the maths:");
    scanf("%d",&marks[2]);   
    printf("physics=%d,chemistry=%d,maths=%d",marks[0],marks[1],marks[2]);
    return 0;
}
