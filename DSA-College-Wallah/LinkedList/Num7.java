package LinkedList;
//Deleting the middle elements of the linked list



 
 
class Num7 {
           public class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
  }
    public ListNode deleteMiddle(ListNode head) {
        if(head.next==null)
        {
            return null;
        }
        ListNode slow=head;
        ListNode fast=head;
        while(fast.next.next!=null && fast.next.next.next!=null)
        {
        slow=slow.next;
        fast=fast.next.next;
        }
        // 1 2 3 4 5
        // slow ->2, 3-> slow.nwxt, 4-> slow.next.next
        slow.next=slow.next.next;
        return head;
    }
}