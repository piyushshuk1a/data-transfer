#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array "<<endl;
    for(int i = 0; i < n; i++){
        
        cin>>arr[i];
        
            }
            for(int i =0; i+1 <n; i=i+2){
                if(i+1 < n){
                    swap(arr[i],arr[i+1]);
                }
            }
            cout<<"Priting the resultant array!!!!"<<endl;
            for(int i =0; i <n; i++){
               cout<<arr[i]<<endl;
            }
}