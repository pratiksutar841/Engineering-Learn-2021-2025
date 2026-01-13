/*
 *Q5: Given an array. Find the first peak element in the array. A peak element is an element that is greater than
its just left and just right neighbor.
Input 1: arr[] = {1,3,2,6,5}
Output 1: 6
Input 2: arr[] = {1 4,7,3,2,6,5}
Output 1: 7
 */
public class GreatestNumber 
{
                    public static int findPeakElement(int[] nums) {
                        int n = nums.length;
                        if (n == 1) {
                            return nums[0];
                        }
                        if (nums[0] > nums[1]) {
                            return nums[0];
                        }
                        for (int i = 1; i < n - 1; i++) {
                            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                                return nums[i];
                            }
                        }
                        if (nums[n - 1] > nums[n - 2]) {
                            return nums[n - 1];
                        }
                        return -1; // no peak element found
                    }
                    public static void main(String[] args) {
                        int[] arr = {1,4,7,3,2,6,5};
                        int peak = findPeakElement(arr);
                        if (peak != -1) {
                            System.out.println("The first peak element in the array is: " + peak);
                        } else {
                            System.out.println("No peak element found in the array.");
                        }
                    }
                
                
                
}
