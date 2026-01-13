/*Q4 : Find the sum of the values of the array [92, 23, 15, -20, 10]. */

package Recursion_Question;

public class Recursion8 {
          public static int sumArray(int[] arr, int index) {
                    if (index == arr.length) {
                        return 0;
                    }
                    return arr[index] + sumArray(arr, index + 1);
                }
            
                public static void main(String[] args) {
                    int[] arr = {92, 23, 15, -20, 10};
                    int sum = sumArray(arr, 0);
                    System.out.println("Sum of the values of the array: " + sum);
                }  
}
