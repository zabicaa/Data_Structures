// Write a program to count the total number of distinct elements in an array of length n
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        bool distinct = true;

        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                distinct = false;
                break;
            }
        }

        if(distinct)
            count++;
    }

    cout << "Total distinct elements = " << count;

    return 0;
}