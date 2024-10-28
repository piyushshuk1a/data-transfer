// Array should be an sorted array with accending order!!!!


#include<iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int key){
    int ans = -1;
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s <= e){if(arr[mid] == key){
        ans = mid;
        e = mid-1;
    }
    else if(arr[mid] > key){
        e = mid-1; 
            }
    else if(arr[mid] < key){
        s = mid+1;
    }
     mid = s + (e-s)/2;



    }
 return ans;
} 
int LastOccurence(int arr[], int n, int key){
    int ans = -1;
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s <= e){if(arr[mid] == key){
        ans = mid;
        s = mid+1;
    }
    else if(arr[mid] > key){
        e = mid-1; 
            }
    else if(arr[mid] < key){
        s = mid+1;
    }
     mid = s + (e-s)/2;



    }
 return ans;
} 
int main(){
int n,key;
cout<<"Enter the size of array :";
cin>>n;
int arr[n];
cout<<"Enter the elements of array :";
for(int i = 0; i < n; i++){
    cin>>arr[i];
}
cout<<"Enter the key whose index want to know :";
cin>>key;
// int ans = FirstOccurence(arr, n,key);
// int ans = LastOccurence(arr, n, key);
 

 cout<<"The index of  " <<key <<endl  << "First occurance is "<< FirstOccurence(arr, n,key)<< endl   << "Last occurance is "<< LastOccurence(arr, n, key);
 
 return 0;


}