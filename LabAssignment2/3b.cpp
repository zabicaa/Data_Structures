// 3(b) Using Binary Search
// Find the missing number in a sorted array using binary search.

#include <iostream>
using namespace std;

int main()
{
    int a[100], n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter " << n - 1 << " sorted elements: ";

    for(int i = 0; i < n - 1; i++)
        cin >> a[i];

    int low = 0, high = n - 2;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(a[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Missing number = " << low + 1;

    return 0;
}
