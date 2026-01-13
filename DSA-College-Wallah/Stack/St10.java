package Stack;
import java.util.Stack;

// Display Stack recursively  in same order
public class St10 
{
      public static void displayRecursively( Stack<Integer> st)
          {
             if(st.size()==0) return;
             int top =st.pop();
             
             displayRecursively(st);
             st.push(top);
             System.out.print(top+" ");
          }
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

    displayRecursively(st);
   }
}
