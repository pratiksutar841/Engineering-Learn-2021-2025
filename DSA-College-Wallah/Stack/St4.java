package Stack;

import java.util.Stack;

public class St4 {
  public static void main(String[] args) //copy contents of one stack to another in same order
  {
    Stack<Integer> st=new Stack<>();       //O(2n)
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    System.out.println("The stack list are "+st);

    Stack<Integer> gt = new Stack<>();
    while (st.size()>0) 
    {
          // int x=st.peek();
          // rt.push(x);
          // st.pop();
          gt.push(st.pop());
    }
    System.out.println("Reverse of Stack "+gt);

    Stack<Integer> rt = new Stack<>();
    while (gt.size()>0) 
    {
          // int x=st.peek();
          // rt.push(x);
          // st.pop();
          rt.push(gt.pop());
    }
    System.out.println("Copy of stack in same order = "+rt);
    

  }           
}
