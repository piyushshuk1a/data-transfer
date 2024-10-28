#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <unordered_map>
using namespace std;

string FirstNonrepeating(string a) {
    unordered_map<char, int> count;
    queue<char> q;
    string ans = "";

    for (int i = 0; i < a.length(); i++) {
        char ch = a[i];
        count[ch]++;
        q.push(ch);
        while (!q.empty()) {
            if (count[q.front()] > 1) {
                q.pop();
            } else {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty()) {
            ans.push_back('#');
        }
    }
    return ans;
}

int main() {
    string a;
    cout << "Input your string: " << endl;
    cin >> a;
    string result = FirstNonrepeating(a);
    cout << "First non-repeating characters: " << result << endl;
    return 0;
}
