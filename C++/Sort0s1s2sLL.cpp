#include<stdio.h>
using namespace std;

Node * SortList(Node* head){
    Node* ZeroCount =0;
    Node* OneCount = 0;
    Node* TwoCount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0)
        ZeroCount++;
    if else(temp -> data == 1)
    OneCount++;
    if else(temp -> data == 2)
    TwoCount++;
    temp = temp -> next;
    }
    temp = head;
    while(temp != NULL){
        if(ZeroCount != 0){
            temp -> data = 0;
            ZeroCount--;
        }
        if else(OneCount != 0){
            temp -> data = 1;
            OneCount--;
        }
        if else(TwoCount != 0){
            temp -> data = 2;
            TwoCount--;
        }
        temp = temp ->next;
    }
    return head;
}
