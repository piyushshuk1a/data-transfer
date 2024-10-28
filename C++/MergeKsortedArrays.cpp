#include <queue>
#include <vector>
#include <iostream>
using namespace std;

class node {
public:
    int data;
    int i;
    int j;
    node(int data, int row, int col) {
        this->data = data;
        i = row;
        j = col;
    }
};

// Custom comparator for the priority queue
struct compare {
    bool operator()(node* a, node* b) {
        return a->data > b->data; // Min-heap based on data
    }
};

vector<int> mergeSortedArrays(vector<vector<int>>& kArrays, int k) {
    priority_queue<node*, vector<node*>, compare> minheap;

    // Insert the first element of each array into the min-heap
    for (int i = 0; i < k; i++) {
        node* temp = new node(kArrays[i][0], i, 0);
        minheap.push(temp);
    }

    vector<int> ans;

    // Process the heap
    while (!minheap.empty()) {
        node* tmp = minheap.top();
        ans.push_back(tmp->data);
        minheap.pop();

        int i = tmp->i;
        int j = tmp->j;

        // If the next element exists, push it into the heap
        if (j + 1 < kArrays[i].size()) {
            node* next = new node(kArrays[i][j + 1], i, j + 1);
            minheap.push(next);
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> kArrays = {
        {1, 4, 5},
        {1, 3, 4},
        {2, 6}
    };

    int k = kArrays.size();

    vector<int> result = mergeSortedArrays(kArrays, k);

    // Output the merged array
    cout << "Merged array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}