public class FloydsCycle {
    public Node deleteCycle(Node head){
        Node slow = head;
        Node fast = head;
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast){
                return slow;
            }
        }
        return null; 
    }
    public Node deleteFirstNode(Node head){
        Node meet = deleteCycle(head);
        Node start = head;

        while(start != meet){
            start = start.next;
            meet = meet.next;

        }
        return start;
    }
}
