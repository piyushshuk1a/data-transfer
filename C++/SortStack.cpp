#include<iostream>
#include<stack>
using namespace std;



void sortedInserted(stack<int>&stack, int num){
    if(stack.empty() || (!stack.empty() && stack.top()<num)){
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();


    //recursive call
    sortedInserted(stack,n);

    stack.push(n)l;
}

void sortstack(stack<int>&stack){
    if(stack.empty())
    return;
    
    int num = stack.top();
    stack.top();
    

//recursive call
    sortstack(stack);

    sortedInsert(stack,num);

}
