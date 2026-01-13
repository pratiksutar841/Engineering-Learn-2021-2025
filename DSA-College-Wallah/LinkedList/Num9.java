package LinkedList;
/* Practice
 * Find out the node where the cycle begins, i.e. the node
 * at which the tail node points
 */


// Definition for singly-linked list.
  

public class Num9 {
          class ListNode {
    int val;
     ListNode next;
     ListNode(int x) {
         val = x;
         next = null;
     }
 }
    public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;

            if (slow == fast) {
                // Cycle detected
                ListNode slow2 = head;

                // Find the intersection point
                while (slow2 != slow) {
                    slow = slow.next;
                    slow2 = slow2.next;
                }

                return slow2; // return the node where the cycle begins
            }
        }

        return null; // no cycle detected
    }
}
