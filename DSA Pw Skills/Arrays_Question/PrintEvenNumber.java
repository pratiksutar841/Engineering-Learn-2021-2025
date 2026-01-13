/*
          Q2: Write a program to traverse over the elements of the array using for each loop and print all even
          elements.
          Input  : arr[] = {34,21,54,65,43}
          Output : 34 54

          Input  : arr[] = {4,3,6,7,1}
          Output : 4 6 
*/
public class PrintEvenNumber 
{
 public static void main(String[] args) 
 {
          int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8 };
          for (int elem : arr) 
          {
              if (elem % 2 == 0)
                  System.out.println(elem);   
          }          
}
}
/*
Approach 
We will traverse the array and will keep a check that if any i th element is even we will print it else will move on
to the next index. 
*/