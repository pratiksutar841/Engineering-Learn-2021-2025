package Stack;

import java.util.Scanner;
import java.util.Stack;

public class CopyStackinReverseOrder {
          public static void main(String[] args) {
                    Scanner sc= new Scanner(System.in);
                    Stack<Integer>st=new Stack<>();
                    System.out.print("Enter the number of elements = ");
                    int n=sc.nextInt();
                    System.out.print("Enter the elements = ");
                    for (int i = 1; i <=n; i++) 
                    {
                      int x=sc.nextInt();
                      st.push(x);          
                    }
                    System.out.println(st);
                    // reverse order
                    Stack<Integer>rt=new Stack<>();
                    while (st.size()>0) 
                    {
                              // int x=st.peek();
                              // rt.push(x);
                              // st.pop();
                          
                              rt.push(st.pop());
                    }
                    System.out.println("The reverse od stack is "+rt);

          }
}
