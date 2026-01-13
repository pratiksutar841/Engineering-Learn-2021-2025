package LinkedList;

class link13 // implementation
{
    
    public static class Node
    {
          int data;
          Node next;
          Node(int data)
          {
              this.data=data;
          }
    } 

    public static class linkedlist 
    {
         Node head=null;
         Node tail=null; 
         
         void insertAtBegining(int val)  // inser At End
         {
            Node temp=new Node(val);
          
             if(head==null)
                {
                   head=tail=temp;         
                }
                else
                {
                   temp.next=head;
                   head=temp;    
                }
               
         }

        void display()
        {
          Node temp=head;
            while(temp!=null)
            {
            System.out.print(temp.data + " ");
            temp = temp.next;
            }
        }
    }   
    public static void main(String[] args) 
    {
          linkedlist ll=new linkedlist();
          ll.insertAtBegining(4);  // 4
          ll.insertAtBegining(5);  // 4 5
          ll.display();
          System.out.println();
         
          
    }      
}
