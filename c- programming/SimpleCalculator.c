#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,opt;
    printf("Enter the 1st and 2nd integer:");
    scanf("%d%d",&num1,&num2);
      for(;;)
        {
            printf("\n1)Addition.\n2)subtraction.\n3)multiple.\n4)Division.\n5)Exit.\n");
            printf("\n\n Enter the your option:");
            scanf("%d",&opt);
            switch(opt)
            {
                case 1:printf("\n Addition of %d and %d is %d\n",num1,num2,num1+num2);
                break;
                case 2:printf("\n subtraction of %d and %d is %d \n",num1,num2,num1-num2);
                break;
                case 3:printf("\n multiplacation of %d and %d is %d\n",num1,num2,num1*num2);
                break;
                case 4:
                       if (num2==0)
                       {
                        printf("\n Divide by zero\n");
                       }
                       else
                       {
                        printf("\n Division of %d and %d is %d\n",num1,num2,num1/num2);
                       }
                       break;
                case 5 :return 0;
                       break;
                default:printf("\n Enter correct option\n");              
                       break;
            }
        }

    return 0;
}

