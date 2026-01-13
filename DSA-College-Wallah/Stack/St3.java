package Stack;

import java.util.Stack;

public class St3 
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

    Stack<Integer> rt = new Stack<>();

    while (st.size()>0) {
          // int x=st.peek();
          // rt.push(x);
          // st.pop();

          rt.push(st.pop());
    }
    System.out.println("Reverse of Stack "+rt);
    

  }      
}
