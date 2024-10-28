#include<iostream>
using namespace std;
int main(){
    int row = 1;
    int n;
    char start = 'A';
    cin>>n;
    while(row<=n){
        int col = 1;
        while(col <= n){
            
            cout<<start<<" ";
            start = start +1;
            col = col+1;
        }
        cout<<endl;
         row = row +1;
    }
}