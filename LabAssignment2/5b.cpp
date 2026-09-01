// 5(b)Tri-diagonal Matrix

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[100][3];

    cout << "Enter elements of 3 diagonals:\n";

    for(int i = 0; i < n; i++)
    {
        if(i > 0)
            cin >> a[i][0];

        cin >> a[i][1];

        if(i < n - 1)
            cin >> a[i][2];
    }

    cout << "Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == i - 1)
                cout << a[i][0] << " ";
            else if(j == i)
                cout << a[i][1] << " ";
            else if(j == i + 1)
                cout << a[i][2] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}