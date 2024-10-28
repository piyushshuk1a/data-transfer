#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
void solve(Node<T>* first, Node<T>* second) {
    // if first list has only one node, point its next to entire second list
    if (first->next == NULL) {
        first->next = second;
        return;
    }

    Node<T>* curr1 = first;
    Node<T>* next1 = curr1->next;
    Node<T>* curr2 = second;
    Node<T>* next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL) {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
            // add node between curr1 and next1
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // update pointers
            curr1 = curr2;
            curr2 = next2;
        } else {
            // move curr1 and next1 forward
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL) {
                curr1->next = curr2;
                return;
            }
        }
    }
}

template <typename T>
Node<T>* sortTwoLists(Node<T>* first, Node<T>* second) {
    if (first == NULL) {
        return second;
    }
    if (second == NULL) {
        return first;
    }

    if (first->data <= second->data) {
        solve(first, second);
        return first;
    } else {
        solve(second, first);
        return second;
    }
}

template <typename T>
void printList(Node<T>* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node<int>* first = new Node<int>(1);
    first->next = new Node<int>(3);
    first->next->next = new Node<int>(5);

    Node<int>* second = new Node<int>(2);
    second->next = new Node<int>(4);
    second->next->next = new Node<int>(6);

    cout << "First List: ";
    printList(first);

    cout << "Second List: ";
    printList(second);

    Node<int>* sortedList = sortTwoLists(first, second);

    cout << "Merged Sorted List: ";
    printList(sortedList);

    return 0;
}
