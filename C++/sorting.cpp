#include<iostream>
using namespace std;

int main() {
    int T;
    // cin >> T;

    // while (T--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Sort the array in ascending order
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
            for(int i = 0; i<n; i++){
                cout<<arr[i]<<" "<<endl;
            }
        // Calculate the difference between the second and first elements (sorted)
       /*/ long int ans = arr[1] - arr[0];
        cout << ans << endl;*/
    // }

    return 0;
}
