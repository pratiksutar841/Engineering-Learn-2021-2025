/*Q5. Given a number n. Print if it is an armstrong number or not. An armstrong number is a number if the sum
of every digit in that number raised to the power of total digits in that number is equal to the number.
Example : 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 hence 153 is an armstrong number. (Easy)
Input1 : 153
Output1 : Yes
Input 2 : 134
Output2 : No */

package Recursion_Question;

public class Recursion9 
{
          public static int countDigits(int n) {
                    if (n < 10) {
                        return 1;
                    }
                    return 1 + countDigits(n / 10);
                }
            
                public static boolean isArmstrong(int n) {
                    int numDigits = countDigits(n);
                    int sum = 0;
                    int temp = n;
                    while (temp > 0) {
                        int digit = temp % 10;
                        sum += Math.pow(digit, numDigits);
                        temp /= 10;
                    }
                    return sum == n;
                }
            
                public static void main(String[] args) {
                    int n1 = 153;
                    if (isArmstrong(n1)) {
                        System.out.println(n1 + " is an Armstrong number");
                    } else {
                        System.out.println(n1 + " is not an Armstrong number");
                    }
                    
                    int n2 = 134;
                    if (isArmstrong(n2)) {
                        System.out.println(n2 + " is an Armstrong number");
                    } else {
                        System.out.println(n2 + " is not an Armstrong number");
                    }
                }      
}
