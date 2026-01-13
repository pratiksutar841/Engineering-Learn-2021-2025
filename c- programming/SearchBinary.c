#include<stdio.h>
void main()
{
    int a[10],n,i,key,found=0,high,low,mid;
    printf("Enter the size of Array = ");
    scanf("%d",&n);
    printf("Enter the %d Array Element = ",n);
           for ( i = 0; i < n; i++)
           {
             scanf("%d",&a[i]);
           }
    printf("Enter key element to be searched = ");
    scanf("%d",&key);
          low = 0;
          high=n-1;
         while (low<=high)
            {
               mid=(low+high)/2;
               if (a[mid]==key)
                  {
                  found=1;
                    break;
                  }
              else if(a[mid]>key)
                  {
                   high=mid-1;
                  }
              else
                  {
                   low=mid+1;
                  }
            } 
           if (found==1)
              {
                printf(" Given item is in the List");
              }
           else
              {
                    printf("Given item is not in the List");
              }
}