#include <iostream>
#include <queue>
using namespace std;

int KthSmallest(int arr[], int l, int r, int k) {
    priority_queue<int> pq;
    
    // Insert the first k elements in the max-heap (priority_queue)
    for (int i = 0; i < k; i++) {
        pq.push(arr[i]);
    }
    
    // Process the remaining elements
    for (int i = k; i <= r; i++) {  // <= r to include the last element
        if (arr[i] < pq.top()) {
            pq.pop();          // Remove the largest element
            pq.push(arr[i]);   // Push the current smaller element
        }
    }
    
    return pq.top();  // The top of the max-heap is the k-th smallest element
}

int main() {
    int arr[] = {7, 10, 4, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    
    cout << "K-th smallest element is " << KthSmallest(arr, 0, n - 1, k);
    return 0;
}
