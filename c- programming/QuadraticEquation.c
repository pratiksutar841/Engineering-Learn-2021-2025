//c program to find the roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,disc;
    printf("Enter the value of a,b,c:\n\n");
    scanf("%f%f%f",&a,&b,&c);
     if((a==0)&&(b==0))
     {
        printf("It is not quadratic equation\n");
        
     }
     else if (a==0)
     {
        printf("Linear equation\n");
               root1=-c/b;
        printf("Root1=%f\n",root1);       
     }
     else
     {
        disc=b*b-4*a*c;
            if(disc==0)
            {
                printf("Roots are the equal\n");
                root1=root2=-b/(2*a);
                printf("Root1=Root2=%f",root1);

            }
             else if(disc>0)
            {
                printf("Roots real and distinct");
                root1=(-b+sqrt(disc))/(2*a);
                root2=(-b-sqrt(disc))/(2*a);
                printf("Root1 =%f\n, Root2 = %f \n",root1,root2);
            }
            else
            {
                printf("Roots are real & imaginary\n");
                    root1=-b/(2*a);
                    root2=sqrt(fabs(disc))/(2*a);
                printf("Root1=%f+i%f\n",root1,root2);
                printf("Root2=%f-i%f\n",root1,root2);


            }
         
     }
     return 0;
}
