package Stack;

import java.util.Stack;

//Remove from bottom/ any index
public class St11 
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
    System.out.print(st);

    Stack<Integer> rt = new Stack<>();

    while(st.size()>1) 
    {
       rt.push(st.pop());
    }
    st.pop();
     System.out.println();
      while(rt.size()>0) 
    {
       st.push(rt.pop());
    }
    System.out.print(st);
   
   
   }       
}
