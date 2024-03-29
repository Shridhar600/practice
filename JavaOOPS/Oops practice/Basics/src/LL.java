public class LL {
    public static void main(String[] args) {   
        LinkedLists list1 = new LinkedLists();
        list1.addLast(5);
        list1.addLast(4);
        list1.addLast(3);
        list1.addLast(2);
        list1.addLast(1);

        list1.addFirst(10);
        list1.printList();
        System.out.println("---------------------");
        list1.deleteLast();
        list1.printList();
        System.out.println("---------------------");
        list1.deleteFirst();
        list1.printList();
        System.out.println("---------------------");
    }
}

class Node{
    int data;
    Node next;

    // constructor 
    public Node(int data){
        this.data = data;
        this.next = null; // intial value of all the new nodes created.
    }
}

class LinkedLists{
    Node head;
    // constructor 
    public LinkedLists(){
        this.head = null; // MEANS ABHI KOI VALUE NAHI HAI- KAHLI LINKED LIST HAI.
    }
    public void addLast(int data){
        Node newNode = new Node(data);

        // check if there is only one node.
        if(head == null){
            head = newNode;
        }else {
            //traversal 
            Node current = head;
            while(current.next != null){
                current = current.next;
            }
            current.next = newNode;
        }
    }
    public void printList(){
        Node current = head;
        while(current !=null){ 
            System.out.println(current.data);
            current = current.next;
        }
    }

    public void addFirst(int data){
        Node newNode2 = new Node(data);
        // check
        if(head == null){
            head = newNode2;
            return;
        }
        //swapping Head and next of nodes.
        newNode2.next = head;
        head = newNode2;
    }

    public void deleteFirst(){
        if(head == null){ // check for empty list.
            System.out.print("Empty list.");
            return;
        }
        else{
            head = head.next;
        }
    }

    public void deleteLast(){
        if(head == null){ // check for empty list.
            System.out.print("Empty list.");
            return;
        }
        if(head.next == null){ // sirf 1 element hai. 
            head = null;
            return;
        }
            Node secondLast = head;
            Node lastNode = head.next;
            while(lastNode.next != null){
                lastNode = lastNode.next;
                secondLast = secondLast.next;
        }
        secondLast.next = null;
    }

    Node ReverseLinked(Node head) {
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

    public Node midNode(Node head){
        Node slow = head;
        Node fast = head;

        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    public Boolean palindromeCheck(Node head){
        if(head == null){
            return true;
        }
        Node mid = midNode(head);
        Node last = ReverseLinked(mid.next);

        Node current = head;
        while(last != null){
            if(last.data != current.data){
                return false;
            }
            last = last.next;
            current = current.next;
        }
        return true;
    }
    
} 