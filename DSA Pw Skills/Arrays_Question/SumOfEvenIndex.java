/*       Q1: Write a program to print the sum of all the elements present on even indices in the given array.
             Input  : arr[] = {3,20,4,6,9}
             Output : 16

             Input  : arr[] = {4,3,6,7,1}
             Output : 11
 */
public class SumOfEvenIndex 
{
          public static void main(String[] args) 
          {
                    int[] arr = {1,2,3,4,5,6,7,8};
                    int i = 0, sum = 0;
                    while (i < arr.length) 
                    {
                    sum = sum + arr[i];
                    i = i+2;
                    }
                    System.out.println(sum);     
          }          
}
/*
Approach
 ->We have traversed the array using a while loop and kept a sum variable that will be incremented by the value
   of elements o5 the array4
 ->At last, upon complete traversal of the array we will print the sum 4
 ->Here the only twist is that since we are concerned about the even indices we will start the iterator from 0 and
   will increment it by 2 every time. 
*/