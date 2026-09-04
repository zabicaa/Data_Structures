// 4(c) Write a program to delete all the vowels from the string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' &&
           s[i] != 'o' && s[i] != 'u' &&
           s[i] != 'A' && s[i] != 'E' && s[i] != 'I' &&
           s[i] != 'O' && s[i] != 'U')
        {
            cout << s[i];
        }
    }

    return 0;
}