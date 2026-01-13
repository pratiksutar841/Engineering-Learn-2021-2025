/*Q3. Given the head of a sorted linked list, delete all duplicates such that each element
appears only once. Return the linked list sorted as well.
Example 1
input : head=[1,1,2]
output : [1,2]

Example 2
input : head=[1,1,2,3,3]
output : [1,2,3]
*/

/*
 //node structure
 class Node {
     int data;
     Node next;
 };
 
 class LinkedList {
   static Node head;
 
   LinkedList(){
     head = null;
   }
 
   //Add new element at the end of the list
   void push_back(int newElement) {
     Node newNode = new Node();
     newNode.data = newElement;
     newNode.next = null; 
     if(head == null) {
       head = newNode;
     } else {
       Node temp = new Node();
       temp = head;
       while(temp.next != null)
         temp = temp.next;
       temp.next = newNode;
     }    
   }
 
    static void deleteDuplicates() {
         if(head == null || head.next == null)
             return ;
         Node curr = head;
         
         while( curr != null && curr.next != null){
            
             if(curr.data == curr.next.data){
                 curr.next = curr.next.next;
             }
             else{
                 curr = curr.next; 
             }
         }
         return;
     }
   //display the content of the list
   void PrintList() {
     Node temp = new Node();
     temp = this.head;
     if(temp != null) {
       System.out.print("The list contains: ");
       while(temp != null) {
         System.out.print(temp.data + " ");
         temp = temp.next;
       }
       System.out.println();
     } else {
       System.out.println("The list is empty.");
     }
   }    
 
   public static void main(String[] args) {
     LinkedList MyList = new LinkedList();
 
     //Add three elements at the end of the list.
     MyList.push_back(3);
     MyList.push_back(3);
     MyList.push_back(5);
     MyList.push_back(6);
     MyList.push_back(6);
     MyList.push_back(7);
     MyList.PrintList();
     
     deleteDuplicates();
     
     MyList.PrintList();
   
   }
 }
 */