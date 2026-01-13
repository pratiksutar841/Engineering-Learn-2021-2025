//program to generate binomial coefficients
#include<stdio.h>
#define max 10
int main()
{
    int m,x,binom;
    printf("mx\n");
      for(m=0;m<=5;++m)
      {
        printf("%d\n",m);
      }
      m=0;
       do
       {
        printf("%d",m);
        x=0;binom=1;
       } while(x<=m);
         {
            if(m==0||x==0)
            {
                printf("%d",binom);
            }
            else
            {
                binom=binom*(m-x+1)/x;
                printf("%d",binom);
            }
            x=x+1;
            printf("\n");
            
         }
        
    return  0;

  } 
