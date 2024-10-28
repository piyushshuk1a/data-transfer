#include <stack>
#include <string>

bool isValidParenthesis(std::string expression) {
    std::stack<char> s;
    
    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        // If opening bracket, push to stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else {
            // If closing bracket, check stack top and pop
            if (!s.empty()) {
                char top = s.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    s.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }
}
int main(){
    std::stack<char> s;
     return s.empty();
}


    // Check if the stack is empty at the end
    
   
