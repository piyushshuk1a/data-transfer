#include <iostream>
#include <queue>
#include <vector>

using namespace std;

long long minCost(long long arr[], long long n) {
    // Min-heap priority queue to store the array elements
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    // Push all array elements into the min-heap
    for(int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }

    long long totalCost = 0;

    // Continue combining the smallest two elements until only one element remains
    while(pq.size() > 1) {
        long long firstMin = pq.top(); pq.pop();
        long long secondMin = pq.top(); pq.pop();

        long long sum = firstMin + secondMin;
        totalCost += sum;

        // Push the combined sum back into the min-heap
        pq.push(sum);
    }

    return totalCost;
}

int main() {
    long long arr[] = {4, 3, 2, 6};
    long long n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum cost to combine elements: " << minCost(arr, n) << endl;

    return 0;
}
