#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = right = NULL;
    }
};

pair<int, int> diameterFast(node* root) {
    if (root == NULL) {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    pair<int, int> result = diameterFast(root);
    cout << "Diameter: " << result.first << endl;

    return 0;
}
