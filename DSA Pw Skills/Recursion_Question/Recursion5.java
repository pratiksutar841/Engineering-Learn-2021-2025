
/*Q1 : Given an integer, find out the sum of its digits using recursion.
Input: n= 1234
Output: 10
Explanation: 1+2+3+4=10 */
package Recursion_Question;

public class Recursion5 
{
          public static int sumOfDigits(int n) 
          {
                    if (n == 0) 
                    {
                        return 0;
                    }
                    return (n % 10) + sumOfDigits(n / 10);
                }
            
                public static void main(String[] args) 
                {
                    int n = 1234;
                    int sum = sumOfDigits(n);
                    System.out.println("Sum of digits of " + n + " = " + sum);
                }      
}
