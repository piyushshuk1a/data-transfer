#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

class Node {
public:
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
    vector<int> topView(Node* root) {
        vector<int> ans;
        if (root == NULL)
            return ans;

        map<int, int> topNode;
        queue<pair<Node*, int>> q; 
        q.push(make_pair(root, 0));

        while (!q.empty()) {
            pair<Node*, int> temp = q.front();
            q.pop();

          Node* frontNode = temp.first;
           int hd = temp.second;

     
               topNode[hd] = frontNode->data;
           

            if (frontNode->left) {
                q.push(make_pair(frontNode->left, hd - 1));
            }
            if (frontNode->right) {
                q.push(make_pair(frontNode->right, hd + 1));
            }
        }

        for (auto i : topNode) {
            ans.push_back(i.second);
        }
        return ans;
    }
};

int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(60);
    //root->right->left = new Node(6);
    //root->right->right = new Node(7);

    Solution sol;
    vector<int> result = sol.topView(root);

    cout << "Bottom view of the binary tree is: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
