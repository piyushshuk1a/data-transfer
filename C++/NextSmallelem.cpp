#include<stack>
#include<vector>
#include<iostream>
vector<int> nextSmallerElement(vector<int> &arr, int n){

stack<int> s;
s.push(-1);
vector<int> ans(n);

for(ant i=n-1; i>=0 ; i -- ) {
int curr = arr[i];
while(s.top() >= curr)
{
 s.pop();
}
//ans is stack ka top
ans[i]= s.top();
s.push(curr);
}
return ans;
}
