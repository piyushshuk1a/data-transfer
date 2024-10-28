#include<iostream>
#include<vector>
using namespace std;

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

void solve(Node* root, int &count, vector<int> &path, int k) {
    if (root == NULL)
        return;
    
    path.push_back(root->data);
    
    solve(root->left, count, path, k);
    solve(root->right, count, path, k);
    
    int size = path.size();
    int sum = 0;
    
    for (int i = size - 1; i >= 0; i--) {
        sum += path[i];
        if (sum == k)
            count++;
    }
    
    path.pop_back();  // Remove the current node from the path after processing
}

int SumK(Node* root, int k) {
    vector<int> path;
    int count = 0;
    solve(root, count, path, k);
    return count;
}

int main() {
    // Create the binary tree
    Node* root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(-1);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->left->right->left = new Node(1);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    root->right->left->left = new Node(1);
    root->right->left->right = new Node(2);

    int k = 5;
    cout << "Number of paths with sum " << k << " is: " << SumK(root, k) << endl;

    return 0;
}
