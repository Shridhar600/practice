#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
     // making a constructor 
    Node(int val){
        data = val;
        next = NULL;
    }
};

 // insert at tail
 void insertAtTail(Node* &head, int val){

    if(head == NULL){
        head = n;
        return;
    }

    Node* n = new Node(val);
// temp pointer for traversal 
    Node *temp = head; // starting from head pointer. temp is a node data type.
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;

 }

void display(Node *head){
    Node*temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node*head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    display(head);
    return 0;
}