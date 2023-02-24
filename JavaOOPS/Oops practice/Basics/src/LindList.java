public class LindList {

    Node head;

 public class Node{
    String data;
    Node next;

    // making a constructor.
    public Node(String data){
        this.data =data;
        this.next = null;
    }
};

public void addFirst(String data){
    Node newNode = new Node(data);
    if(head == null){
        head = newNode;
        return;
    }
    // if already an list exists.
    newNode.next = head;
    head = newNode;
}

public void addLast(String data){
    Node newNode = new Node(data);
    if(head == null){
        head = newNode;
        return;
    }
    //traversal
    Node currNode = head;
    while(currNode != null){
        currNode = currNode.next;
    }

    currNode.next = newNode;
}

//print
public void printList(){
    Node currNode = head;
    while(currNode.next != null){
        System.out.print(currNode.data + " -> ");
        currNode = currNode.next;
    }
}

public static void main(String[] args){
    // Node list1 = new Node("initial value");
    LindList list1 = new LindList();
      list1.addFirst("gandu");
      list1.addFirst("Honey");
      list1.printList();
}
}

// Add first 

