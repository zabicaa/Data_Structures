//4(e) Uppercase to Lowercase
//Write a program to convert a character from uppercase to lowercase.

#include <iostream>
using namespace std;

int main ()
{
    char ch;

    cout << "Enter an uppercase character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    cout << "Lowercase character: " << ch;

    return 0;
}