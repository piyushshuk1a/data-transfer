/*
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 10 11
*/





#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = i;
        while (j < 2 * i)
        {
            cout << j;
            cout << " ";

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
//SECOND APROACH
/*
#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j <= n){
            cout<<i+j-1;
            j = j+1;
        }
        cout<<endl;
        i= i+1;
    }
}


















*/