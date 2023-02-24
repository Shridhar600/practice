public class LL {
    public static void main(String[] args) {   
        LinkedList list1 = new LinkedList();
        list1.addLast(5);
        list1.addLast(4);
        list1.addLast(3);
        list1.addLast(2);
        list1.addLast(1);

        list1.addFirst(10);

        list1.printList();
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

class LinkedList{
    Node head;
    // constructor 
    public LinkedList(){
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
}