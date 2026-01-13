package LinkedList;

public class link8
{
  public static class Node
  {
    int data;    // value
    Node next;   // address of next node
    Node(int data)
    {
          this.data=data;
    }
  }

  public static void displayr1(Node head)       //recursively
  {
          if (head==null) 
              return;                                // print serial
          System.out.print(head.data+" ");
          displayr1(head.next);  
          
  }
  public static void displayr2(Node head)       //recursively
    {
            if (head==null) 
                return;
                displayr2(head.next);                 //print reverse
            System.out.print(head.data+" ");
              
            
    }
  public static void main(String[] args) 
  {
       Node a=new Node(5);

       // System.out.println(a.next);     //null

       Node b=new Node(3);
       Node c=new Node(9);
       Node d=new Node(8);
       Node e=new Node(16);      //5  3  9  8  16

       a.next=b;         //5->3  9  8  16
       b.next=c;         //5->3->9  8  16
       c.next=d;         //5->3->9->8  16
       d.next=e;         //5->3->9->8->16
      
        displayr1(a);
        System.out.println();
        displayr2(a);
  }          
}
