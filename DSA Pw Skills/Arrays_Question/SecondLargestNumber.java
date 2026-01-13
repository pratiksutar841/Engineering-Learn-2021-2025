/*
 Q4: Write a program to find out the second largest element in a given array.
Input 1: arr[] = {34,21,54,65,43}
Output 1: 54
Input 1: arr[] = {4,3,6,7,1}
Output 1: 6
 */
public class SecondLargestNumber 
{
 public static void main(String[] args) 
 {
          int[] arr = { 34, 21, 54, 65, 43 };
          int arr_size = arr.length;
          int i, first, second;
          // There should be at least two elements
          if (arr_size < 2) 
          {
              System.out.printf(" Invalid Input ");
              return;
          }
          int largest = second = Integer.MIN_VALUE;
  
          // Find the largest element
          for (i = 0; i < arr_size; i++)
              largest = Math.max(largest, arr[i]);
  
          // Find the second largest element
          for (i = 0; i < arr_size; i++) {
              if (arr[i] != largest)
                  second = Math.max(second, arr[i]);
          }
          if (second == Integer.MIN_VALUE)
              System.out.printf("There is no second " +
                      "largest element\n");
          else
              System.out.printf("%d\n", second);     
 }          
}

/*
 Approach 
  ->We will traverse the array, and will keep a max variable that will be updated with the current element of the 
    array if the array element is greater than the value of max variabled
  ->Initially the max variable is given the minimum integer value.
 */