#include<bits/stdc++.h>
using namespace std;
int count(vector<int> arr, bool as) {
    int cnt = 0;
    int n=arr.size();
    for(int i=0; i < n; i++) {
        for(int j=0; j<n -i-1; j++){
            if(as && arr[j]>arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                cnt++;
            }
            if(!as && arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int cntAsc = count(a, true);
    int cntDesc = count(a, false);
    cout<<min(cntAsc, cntDesc)<<endl;
    
    return 0;
}
