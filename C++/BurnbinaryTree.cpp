#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int ans = -1;

int burn(Node* root, int target, int& depth) {
    if (root == nullptr) return 0;
    if (root->data == target) {
        depth = 1;
        return 1;
    }

    int ld = -1, rd = -1;

    int lh = burn(root->left, target, ld);
    int rh = burn(root->right, target, rd);

    if (ld != -1) {
        ans = max(ans, ld + 1 + rh);
        depth = ld + 1;
    } else if (rd != -1) {
        ans = max(ans, rd + 1 + lh);
        depth = rd + 1;
    }

    return max(lh, rh) + 1;
}

int minTime(Node* root, int target) {
    int depth = -1;
    burn(root, target, depth);
    return ans;
}

// Example usage
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int target = 6;
    cout << "Minimum time to burn the tree: " << minTime(root, target) << endl;

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
