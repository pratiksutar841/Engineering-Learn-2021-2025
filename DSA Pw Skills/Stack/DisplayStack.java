package Stack;

import java.util.Stack;

public class DisplayStack 
{
  public static void main(String[] args) 
     {
           Stack<Integer>st=new Stack<>();  // copy contents of one stack to another in same order
           st.push(1);
           st.push(2);
           st.push(3);
           st.push(4);
           st.push(5);
           st.push(6);
           System.out.println(st);

          //  Stack<Integer>rt=new Stack<>();
          //  while (st.size()>0) {
          // //        int x=st.pop();
          //        rt.push(st.pop());   
          //  }
          //  while (rt.size()>0) {
          //          int x=rt.pop();
          //          System.out.print(x+" "); 
          //          st.push(x);
          //  }
          //  System.out.println(st);



          // int n=st.size();
          // int arr[]=new int[n];
          // for (int i = n-1; i >= 0; i--) 
          // {
          //  arr[i]=st.pop();          
          // }

          // for (int i = 0; i < n; i++) {
          //     System.out.print(arr[i]+" "); 
          //     st.push(arr[i]);     
          // }
     }            
}
