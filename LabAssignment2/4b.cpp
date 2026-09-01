//4(b) Reverse a String
// Write a program to reverse a string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    for(int i = s.length() - 1; i >= 0; i--)
        cout << s[i];

    return 0;
}