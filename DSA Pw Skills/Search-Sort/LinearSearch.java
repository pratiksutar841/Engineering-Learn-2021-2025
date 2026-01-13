//Time complexity= O(n)
//Space complexity= O(n)
import java.util.*;
public class LinearSearch
{
   public static void main(String[] args) 
   {
       Scanner sc= new Scanner(System.in);
       System.out.print("Enter the number of elements present in an array = ");
       int n=sc.nextInt();

       System.out.print("Enter the array Elements = ");
       int arr[]=new int[n];

       for (int i = 0; i < arr.length; i++) 
       {
         arr[i]=sc.nextInt();   
       }
       System.out.print("Enter the target elements = ");
       int x=sc.nextInt();

        int idx=-1;
       for (int i = 0; i < arr.length; i++) 
       {
          if (arr[i]==x) 
          {
           idx=i;
           break;          
          }
       }
       if (idx==-1) {
          System.out.println("Searched element is not found in array");
       } else {
          System.out.println("Searched elements is found at the location: "+idx);
       }

   }       
}