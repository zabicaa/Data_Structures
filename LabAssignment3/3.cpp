#include <iostream>
#include <stack>
using namespace std;

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isBalanced(string exp) {
    stack<char> s;

    for (char ch : exp) {

        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }

        else if (ch == ')' || ch == '}' || ch == ']') {

            if (s.empty())
                return false;

            if (!isMatching(s.top(), ch))
                return false;

            s.pop();
        }
    }

    return s.empty();
}

int main() {
    string exp;

    cout << "Enter expression: ";
    cin >> exp;

    if (isBalanced(exp))
        cout << "Balanced parentheses\n";
    else
        cout << "Not balanced\n";

    return 0;
}