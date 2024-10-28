#include<iostream>
using namespace std;

bool IsPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;  // Initialize with 1, as the first student will always get at least one book
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int main() {
    int n, m;
    cout << "Enter the number of students: ";
    cin >> m;

    cout << "Enter the number of books: ";
    cin >> n;

    int arr[n];
    cout << "Enter the pages: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (IsPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    cout << "The answer is: " << ans;
    return 0;
}
