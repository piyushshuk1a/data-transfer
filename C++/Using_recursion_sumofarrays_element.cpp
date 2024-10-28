#include<iostream>
using namespace std;
ArraySum(int arr[], int n){
        if(n == 0){
            return 0;
        }
        else{
            return arr[0] + ArraySum(arr + 1, n - 1);
        }
     }
int main(){

     





    int size;
    cin>>size;
    int arr[100];
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int sum = ArraySum(arr,size);

    cout<<"The sum of the elements of array is : "<< sum <<endl;

}