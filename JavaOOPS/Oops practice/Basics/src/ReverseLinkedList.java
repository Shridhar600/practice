public class ReverseLinkedList {
    public static void main(String[] args) {

        Linky list1 = new Linky();

        list1.head = new Node(55);
        list1.head.next = new Node(65);
        list1.head.next.next = new Node(6);
        list1.head.next.next.next = new Node(4);

        list1.printList();

        System.out.println("---------------------");

        Node newHead = list1.ReverseLind(list1.head);

        while (newHead != null) {
            System.out.println(newHead.data + " ");
            newHead = newHead.next;
        }

    }
}

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class Linky{
    Node head;

    public Linky() {
        this.head = null;
    }

    public void addAage(int data) {
        Node nr = new Node(data);
        if (head == null) {
            head = nr;
            return;
        }
        // agar head null nahi hai.
        nr.next = head;
        head = nr;
    }

    public void printList(){
        Node current = head;
        while(current !=null){ 
            System.out.println(current.data);
            current = current.next;
        }
    }

    Node ReverseLind(Node head) {
        Node curr = head;
        Node prev = null;

        while (curr != null) {
            Node temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
}
