// 5(c) Lower triangular matrix

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[100];

    cout << "Enter lower triangular elements:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
            cin >> a[i * (i + 1) / 2 + j];
    }

    cout << "Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j <= i)
                cout << a[i * (i + 1) / 2 + j] << " ";
            else
                cout << "0 ";
        }

        cout << endl;
    }

    return 0;
}