#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    stack<char> s;

    // Push every character
    for (char ch : str)
        s.push(ch);

    cout << "Reversed string: ";

    // Pop characters
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    cout << endl;

    return 0;
}