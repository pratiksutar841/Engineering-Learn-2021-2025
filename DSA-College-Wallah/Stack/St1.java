package Stack;

import java.util.Stack;

public class St1 
{
  public static void main(String[] args) 
  {
    Stack<Integer> st=new Stack<>();
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    System.out.println("The stack list are "+st);
    System.out.println("Top element = "+st.peek());
    System.out.println("Size of stack ="+st.size());
    System.out.println(st.pop());
    System.out.println(st);

    while (st.size()>1) {
          st.pop();
    }
    System.out.println(st.peek());
    System.out.println(st);

  }          
}
