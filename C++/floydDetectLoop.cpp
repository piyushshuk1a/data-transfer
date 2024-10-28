#include <stdiio.h>
using namespace std;

Node* floydDetectLoop(node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;

        }
        slow = slow -> next;
        if(slow == fast){
            cout<< "Present at " << slow -> data <<endl;
            return slow;
        }
    }
    return NULL;
}
int main(){
    if(floydDetectLoop(head) != NULL){
        cout<<"cyle is present "
    }
    else 
    cout<<"Not present"<<endl;
}