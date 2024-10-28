#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    n = n/10;
    int d = n%10;
    sum = sum +d;
    n = n/10;
    cout <<"the sum is :" << sum <<endl;
    
}