#include<iostream>
using namespace std;

class Node{
      public:
      int data;
      Node* prev;
      Node* next;

    //  constructor
    Node(int d){
        this -> data = d;
        this -> next =  NULL;
        this -> prev = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
       temp = temp -> next;

    }
    cout<<endl;
        }

void insertAtHead(Node* &head,  int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;

}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail  = temp;

}

int main(){
    Node* node1 = new Node(90);
    Node* head = node1;
    Node* tail = node1;
     print(head);

     insertAtHead(head, 11);
     print(head);
     insertAtHead(head, 15);
     insertAtHead(head, 13);
     insertAtHead(head, 16);
     print(head);
     insertAtTail(tail,0);
     print(head);

}