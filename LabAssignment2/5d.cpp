// 5(d) Upper triangular matrix

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[100];

    cout << "Enter upper triangular elements:\n";

    int k = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
            cin >> a[k++];
    }

    cout << "Matrix:\n";

    k = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j >= i)
                cout << a[k++] << " ";
            else
                cout << "0 ";
        }

        // Reset index for proper display
        k = i * n - i * (i - 1) / 2;

        cout << endl;
    }

    return 0;
}