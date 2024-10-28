#include<iostream>
using namespace std;

int searchbinary(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return -1;
}

int main() {
    int n, key;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n]; // Declare the array after taking input for its size

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key whose index you want to know: ";
    cin >> key;

    int index = searchbinary(arr, n, key);
    cout << "The index of " << key << " is " << index << endl;

    return 0;
}
