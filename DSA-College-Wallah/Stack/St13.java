package Stack;



public class St13 
{
          public static class Stack 
          {
             private int[] arr=new int[2];
             private int idx=0; 

             void push(int x)
             {
                    if (isFull()) {
                              System.out.println("Stack is full !");
                              return;
                    }
                  arr[idx]=x;
                  idx++;
             }  

             int peek()
             {
                    if (idx==0) 
                    {
                      System.out.println("Stack is Empty");
                      return -1;          
                    }
                    return arr[idx-1];
             }   

             int pop()
             {
                    if(idx==0)
                    {
                           System.out.println("Stack is Empty !");
                           return -1;   
                    }
                    int top =arr[idx-1];
                    arr[idx-1]=0;
                    idx--;
                    return top;
             }

             void Display()
             {
                for (int i = 0; i < idx-1; i++) 
                {
                  System.out.print(arr[i]+" ");    
                }    
                System.out.println();
             }

             int size()
              {
                    return idx;
              }

              boolean isEmpty()
              {
                    if(size()==0) return true;
                    else return false;
              }
              boolean isFull()
              {
                    if(idx==arr.length) return true;
                    else return false;
              }
          }
  public static void main(String[] args) 
  {
      Stack st = new Stack();
      st.push(1);
      st.Display();
      st.push(2);
      st.Display();
      st.push(3);
      st.Display();
      st.push(4);
      st.Display();
      st.push(5);
      st.Display();
      st.push(6);
      st.Display();
      st.push(7);
      st.Display();
      st.pop();
      st.Display();
      st.pop();
      st.Display();
      st.pop();
      st.Display();
      st.pop();
      st.Display();
      st.pop();
      st.Display();
       
  }          
}
