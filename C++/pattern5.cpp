#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n,j;
    char ch = 'A' + i + j - 2;
    cin >> n;
    while (i <= n)
    {
        int j= 1;
        while (j <= i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}