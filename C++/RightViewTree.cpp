#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

void solve(Node* root, vector<int>& ans, int level) {
    if(root == NULL) {
        return;
    }
    if(level == ans.size()) {
        ans.push_back(root->data);
    }
    solve(root->right, ans, level + 1);
    solve(root->left, ans, level + 1);
}

vector<int> leftView(Node* root) {
    vector<int> ans;
    solve(root, ans, 0);
    
    return ans;
}

int main() {
    // Creating a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = leftView(root);
    
   
    // Printing the left view of the binary tree
    cout<<"Right View Of Tree : "<<endl;
    for(int i : result) {
        cout << i << " ";
    }
    
    // Cleanup dynamically allocated memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;


    return 0;
}