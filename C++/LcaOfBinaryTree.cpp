#include<iostream>
using namespace std;
//Lowest common ancestors in binary treee
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    Node* lca(Node* root, int n1, int n2) {
        if (root == NULL) {
            return NULL;
        }
        if (root->data == n1 || root->data == n2) {
            return root;
        }

        Node* leftAns = lca(root->left, n1, n2);
        Node* rightAns = lca(root->right, n1, n2);

        if (leftAns != NULL && rightAns != NULL)
            return root;
        else if (leftAns != NULL)
            return leftAns;
        else
            return rightAns;
    }
};

int main() {
    // Create the binary tree
    Node* root = new Node(5);
    root->left = new Node(2);
   // root->right = new Node(1);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    //root->right->left = new Node(0);
   // root->right->right = new Node(8);
   // root->left->right->left = new Node(7);
   // root->left->right->right = new Node(4);

    Solution sol;
    int n1 = 3;
    int n2 = 4;

    Node* lcaNode = sol.lca(root, n1, n2);

    if (lcaNode != NULL) {
        cout << "LCA of " << n1 << " and " << n2 << " is: " << lcaNode->data << endl;
    } else {
        cout << "LCA does not exist." << endl;
    }

    return 0;
}
