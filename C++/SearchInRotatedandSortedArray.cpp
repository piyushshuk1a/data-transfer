#include<iostream>
using namespace std;
int getPivot(int arr[], int n){
    int s =0;
    int e = n-1;
    int mid = s +(e-s)/2;
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
         mid = s +(e-s)/2;
    }
    return s;

}
int searchbinary(int arr[], int s , int e, int key) {
    int start = s;
    int end = e;
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
int main(){
   
    int key,n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];

     cout<<"Enter the elements of array :";
    for(int i =0; i <n; i++){
        cin>>arr[i];    
        }

     int pivot = getPivot(arr,n);

        cout<<"Enter the key whose index you want to find :";
        cin>>key;

        if(key >= arr[pivot] && key <= arr[n-1]){
           cout<<"Index of " << key << "is"<<endl<< searchbinary(arr, pivot, n - 1, key);
        }
        else{
          cout<<"Index of " << key << " "   "is" <<endl<< searchbinary(arr, 0, pivot - 1, key);
          
        }
        return 0;
}