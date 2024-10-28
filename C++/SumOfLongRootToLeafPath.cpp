#include<iostream>
#include<climits>
using namespace std;

// Define the structure for a tree node
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

void solve(Node* root, int sum, int &maxSum, int len, int &maxLen) {
    if(root == NULL) {
        if(len > maxLen) {
            maxLen = len;
            maxSum = sum;
        }
        else if(len == maxLen) {
            maxSum = max(sum, maxSum);
        }
        return;
    }

    sum += root->data;

    solve(root->left, sum, maxSum, len + 1, maxLen);
    solve(root->right, sum, maxSum, len + 1, maxLen);
}

int sumOfLongRootToLeafPath(Node* root) {
    int len = 0;
    int maxLen = 0;
    int sum = 0;
    int maxSum = INT_MIN;

    solve(root, sum, maxSum, len, maxLen);

    return maxSum;
}

int main() {
    // Create a sample tree
    Node* root = new Node(1);
    root->left = new Node(5);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(2);
    root->right->right = new Node(5);
    root->right->left = new Node(1);
    root->left->left->left = new Node(2);

    cout << "Sum of the longest root-to-leaf path is: " << sumOfLongRootToLeafPath(root) << endl;

    return 0;
}
