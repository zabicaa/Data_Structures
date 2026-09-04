// 4(d) Write a program to sort the strings in alphabetical order.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a[100], temp;
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Enter strings:\n";

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Strings in alphabetical order:\n";

    for(int i = 0; i < n; i++)
        cout << a[i] << endl;

    return 0;
}