#include<stdio.h>
int main()
{
    
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
      if(age>=18)
      {
        printf("you are adult\n");
        printf("you can vote\n");
        printf("you can drive rolls royal\n");
      }
       else
       {
       printf("not adult\n");
       printf("sit home only and watch tv do study\n");
       } 
    return 0;
}
