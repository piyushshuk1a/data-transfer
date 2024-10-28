#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

vector<int> zigZagTraversal(Node* root) {
    vector<int> result;
    if(root == NULL)
        return result;

    queue<Node*> q;
    q.push(root);

    bool leftToRight = true;

    while(!q.empty()) {
        int size = q.size();
        vector<int> ans(size);

        // Level Process
        for(int i = 0; i < size; i++) {
            Node* frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;
            ans[index] = frontNode->data;

            if(frontNode->left)
                q.push(frontNode->left);
            if(frontNode->right)
                q.push(frontNode->right);
        }

        // direction change
        leftToRight = !leftToRight;

        for(auto i: ans) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    // Sample tree construction
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = zigZagTraversal(root);

    for(int i : result) {
        cout << i << " ";
    }

    return 0;
}
