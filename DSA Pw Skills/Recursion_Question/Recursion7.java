/*Q3: Print the max value of the array [ 13, 1, -3, 22, 5]. */
package Recursion_Question;

public class Recursion7 
{
          public static int maxArrayValue(int[] arr, int index) 
          {
                    if (index == arr.length - 1) 
                    {
                        return arr[index];
                    }
                    int max = maxArrayValue(arr, index + 1);
                    return arr[index] > max ? arr[index] : max;
                }
            
                public static void main(String[] args) 
                {
                    int[] arr = {13, 1, -3, 22, 5};
                    int max = maxArrayValue(arr, 0);
                    System.out.println("Maximum value of the array: " + max);
                }          
}
