#include<iostream>
#include<utility>
using namespace std;
int main(){
int n;
printf("Enter the size of array :");
scanf("%d", &n);

int arr[n];
for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}

for(int i  = 0; i < n; i++){
    for(int j = 0; j < n-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}

printf("The sorted array is : \n");
for(int i = 0; i < n; i++){
    printf("%d\n", arr[i]);
}
    
}



