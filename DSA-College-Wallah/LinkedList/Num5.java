package LinkedList;
/* Finding intersection of two linked lists
 * two pointers to the rescue
 *   100 - 13 - 4 
 *               \
 *                5 - 12 - 10 - null
 *               /
 *         10 - 9  
 */


  //Definition for singly-linked list.
  
 
public class Num5 {
          public class ListNode {
      int val;
      ListNode next;
      ListNode(int x) {
          val = x;
          next = null;
      }
  }
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode tempA=headA;
        ListNode tempB=headB;
        int lengthA=0;
        while(tempA!=null)
        {
            lengthA++;
            tempA=tempA.next;
        }
         int lengthB=0;
        while(tempB!=null)
        {
            lengthB++;
            tempB=tempB.next;
        }
        tempA=headA;
        tempB=headB;

        if(lengthA>lengthB)
        {
            int steps=lengthA-lengthB;
            for(int i=1;i<=steps;i++)
            {
                tempA=tempA.next;
            }
        }
        else{
            int steps=lengthB-lengthA;
            for(int i=1; i<=steps;i++)
            {
                tempB=tempB.next;
            }
        }
        while(tempA!=tempB)
        {
            tempA=tempA.next;
            tempB=tempB.next;
        }
        return tempA;
        
    }
}