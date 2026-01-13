package LinkedList;

public class link10         // Implementation of a singly linkedlist
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
  public static class linkedlist 
  {
     Node head=null;
     Node tail=null;
     int size=0;
        /*---------------------------------------------------------------------------------- */
                   void insertAtBegening(int val)
                   {
                        Node temp= new Node(val);
                        if (head==null)        //empty list
                          {
                            head=tail=temp;  //inserAtEnd(val)
                          } 
                      else   //non empty list
                          {
                          temp.next=head;
                          }
                            head=temp;
                            size++;
                   }
        /*-------------------------------------------------------------------------------------- */  
                    void insertAtposition(int idx, int val)
                    {
                      Node t=new Node(val);
                      Node temp=head;
                      if (idx==size) {
                        insertAtEnd(val);
                        return;
                      }
                     else if(idx==0) 
                      {
                          insertAtBegening(val);
                          return;
                      }
                      else if(idx<0||idx>size)
                      {
                        System.out.println("wrong index");
                        return;
                      }
                  
                         for (int i = 0; i < idx-1; i++) 
                         {
                            temp=temp.next;
                         }
                         t.next=temp.next;
                         temp.next=t;
                         size++;

                    }  
        /*-------------------------------------------------------------------------------- */       
                    void insertAtEnd(int val)
                        {
                          Node temp = new Node(val);
                            if (head==null) 
                              {
                                head=temp;
                              } 
                          else 
                              {
                                tail.next=temp;
                              }
                            tail=temp;
                            size++;
                        }
        /*----------------------------------------------------------------------------------- */
                    int getAt(int idx)
                    {
                      if(idx<0||idx>size)
                                            {
                                              System.out.println("wrong index");
                                              return -1;
                                            }
                      Node temp=head;
                      for (int i = 1; i <=idx; i++) 
                      {
                        temp=temp.next;  
                      }
                      return temp.data;
                    }
         /*---------------------------------------------------------------------------------- */           
                    void display()
                    {
                              Node temp=head;
                              while (temp!=null) 
                              {
                              System.out.print(temp.data+" ");
                              temp=temp.next;  
                              }
                              System.out.println();
                    }
        /*---------------------------------------------------------------------------------- */
                   void deleteAt(int idx)
                   {
                    if(idx==0){
                       head=head.next;
                       size--;
                       return;
                    }
                    Node temp=head;
                    for (int i = 0; i < idx-1; i++) {
                      temp=temp.next;
                      
                    }
                    temp.next=temp.next.next;
                    tail=temp;
                    size--;
                   }
                    // int size()//O(n)
                    // {
                    //   // Node temp=head;
                    //   // int count=0;
                    //   // while (temp!=null) 
                    //   //   {
                    //   //     count++;
                    //   //     temp=temp.next;  
                    //   //   }
                    //   //   return count;
                    //   return size;
                    // }
  }
  public static void main(String[] args) 
  {
          linkedlist ll=new linkedlist();
          
          ll.insertAtEnd(4);  // 4
          //ll.display();
          ll.insertAtEnd(5);  // 4->5
          //ll.display();
          ll.insertAtEnd(12); // 4->5->12
          //ll.display();
          ll.insertAtBegening(13);  // 13->4->5->12
          //ll.display();
          ll.insertAtposition(4, 10);//13->4->5->12->10
         // ll.display();       
         // System.out.println(ll.tail.data);    
          ll.insertAtposition(0, 100); //100->13->4->5->12->10
          ll.display();
          //System.out.println(ll.getAt(3));
          //System.out.println(ll.size);
          ll.deleteAt(0);
          ll.display();
          System.out.println(ll.tail.data);
  }          
}
