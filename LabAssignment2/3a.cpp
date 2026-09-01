// 3. Design the Logic to Find a Missing Number in a Sorted Array. 
//Given an array of n-1 distinct integers in the range of 1 to n, 
//find the missing number in it in a Sorted Array

// a) Linear time

#include <iostream>
using namespace std;

int main()
{
    int a[100], n;

    cout << "Enter n: ";
    if(!(cin >> n)) {
        cerr << "Invalid input for n\n";
        return 1;
    }

    if(n < 1 || n > 100) {
        cerr << "n must be between 1 and 100\n";
        return 1;
    }

    cout << "Enter " << n - 1 << " elements: ";

    for(int i = 0; i < n - 1; i++) {
        if(!(cin >> a[i])) {
            cerr << "Insufficient elements provided\n";
            return 1;
        }
    }

    int expected = 1;

    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] != expected)
        {
            cout << "Missing number = " << expected;
            return 0;
        }

        expected++;
    }

    cout << "Missing number = " << n;

    return 0;
}
