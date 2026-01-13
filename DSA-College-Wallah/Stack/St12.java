package Stack;
// push at bottom
import java.util.Stack;

public class St12 
{
   public static void PushAtBottom(Stack<Integer> st, int x) 
   {
      if(st.size()==0)
        { st.push(x);
         return;
        }
            
      int top = st.pop();
      PushAtBottom(st, x);   
      st.push(top);           
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
    System.out.println(st);
   
    PushAtBottom(st, 8);

  }          
}
