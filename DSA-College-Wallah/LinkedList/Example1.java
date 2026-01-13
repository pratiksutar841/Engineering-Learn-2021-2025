/* Q1. Given a linked list and a key ‘X‘ in, the task is to check if X is present in the linked list or not.
Examples:
Input = 14->21->11->30->10, X = 14
Output =  Yes
Explanation: 14 is present in the linked list.

Input=6->21->17->30->10->8, X = 13
Output = No */
package LinkedList;

/*

class LinkedList {
    class Node {
        int data;
        Node next;
        Node(int d)	{
        data = d;
        next = null;
        }
    }

    Node head; 

    // Inserts a new node at the front of the list
    public void push(int new_data)	{
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }

    // Checks whether the value x is present in linked list
    public boolean search(Node head, int x)
    {
        Node current = head; 
        while (current != null) {
            if (current.data == x)
                return true; // data found
            current = current.next;
        }
        return false; // data not found
    }
    public static void main(String args[]){
        LinkedList llist = new LinkedList();

        llist.push(21);
        llist.push(22);
        llist.push(11);
        llist.push(43);
        llist.push(23);

        if (llist.search(llist.head, 21))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}



Approach :c
N We haOe simply traOersed the linked list and checked for eOery node whether its data is equal to
the target
N If found we returned true else if the iterator reached the end of the linked list we returned false.

*/                

