#include<iostream>
using namespace std;

class Node{
    public:
  int data;
  Node* next;

  //constructor
  Node(int d){
    this -> data = d;
    this -> next = NULL;
  }
  //distructor
  ~Node(){
    int value = this -> data;
    if(this -> next != NULL){
        delete next;
        next = NULL;

    }
    cout<<"Memory is free for node with data" << value << endl;

  }

};
 
 void insertNode(Node* &tail, int element , int d){
     
     //empty list
      if(tail== NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;

      }
      //non empty
      else
      {
        Node* curr= tail;
        while(curr -> data != element){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
      }
 }

 void print(Node* tail){
    Node* temp = tail;
       do{ cout<<tail -> data << " ";
        tail = tail -> next;
       }
    while(tail != temp);
    cout<<endl;
 }

int main(){

    Node* tail = NULL;

    //empty list m insert kr rhe 
     
     insertNode(tail, 5,3);
     print(tail);
  return 0;
}