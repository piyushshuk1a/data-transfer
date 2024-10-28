#include <iostream>

using namespace std;
 
class Node{
    public:
    int data;
    Node* next;
   

   //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }   
};

void InsertAtHead(Node* &head, int d){
      
      //new node construct

      Node* temp = new Node(d);
      temp -> next = head;
      head = temp;
}

 void InsertAtTail(Node* &Tail, int d){
      Node* temp = new Node(d);
      Tail -> next = temp;
      Tail = temp;

}


void InsertAtPosition(Node* &Tail, Node* &head, int position, int d){
     
    if(position == 1 ){
        InsertAtHead(head,d);
        return;
    }



    Node* temp = head;
    int cnt =1;
    while(cnt < position -1){
        temp = temp -> next;
        cnt++;
    }
   
    if(temp -> next == NULL){
        InsertAtTail(Tail,d);
        return;
    }

   


    Node* nodetoInsert = new Node(d);
    nodetoInsert -> next = temp -> next;
    temp  ->  next = nodetoInsert;



}


void print(Node* &head)
{
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<< " ";
    temp = temp -> next;

  }
  cout<<endl;



}

int main(){
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next <<endl;

    Node*head = node1;
    Node*Tail = node1;

    print(head);
     
    InsertAtTail(Tail,12);

    print(head);

    InsertAtTail(Tail,15);


    print(head);
    

    InsertAtPosition(Tail,head,1,43);

     print(head);
      
cout<<"Head "<< head -> data <<endl;
cout<<"Tail "<< Tail -> data <<endl;

    return 0;

}
