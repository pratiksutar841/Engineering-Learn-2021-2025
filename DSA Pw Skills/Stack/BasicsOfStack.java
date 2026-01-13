package Stack;

import java.util.Stack;

public class BasicsOfStack 
{
 public static void main(String[] args) {
          Stack<Integer> st=new Stack<>();
          st.push(10);
          st.push(20);
          st.push(30);
          st.push(40);
          st.push(50);
          st.push(60);
          st.push(70);
          st.push(80);
          System.out.println(st);
          System.out.println(st.peek());
          st.pop();
          System.out.println(st);
          System.out.println("Size of Stack "+st.size());

 }          
}
