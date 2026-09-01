// 6(b) Addition of two matrices.

#include <iostream>
using namespace std;

int main()
{
    int a[50][3], b[50][3], c[100][3];
    int n1, n2;

    cout << "Enter number of non-zero elements in A: ";
    cin >> n1;

    a[0][2] = n1;

    cout << "Enter row column value for A:\n";

    for(int i = 1; i <= n1; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2];

    cout << "Enter number of non-zero elements in B: ";
    cin >> n2;

    b[0][2] = n2;

    cout << "Enter row column value for B:\n";

    for(int i = 1; i <= n2; i++)
        cin >> b[i][0] >> b[i][1] >> b[i][2];

    int i = 1, j = 1, k = 1;

    while(i <= n1 && j <= n2)
    {
        if(a[i][0] == b[j][0] &&
           a[i][1] == b[j][1])
        {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2] + b[j][2];

            i++;
            j++;
            k++;
        }
        else if(a[i][0] < b[j][0] ||
               (a[i][0] == b[j][0] && a[i][1] < b[j][1]))
        {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2];

            i++;
            k++;
        }
        else
        {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1];
            c[k][2] = b[j][2];

            j++;
            k++;
        }
    }

    while(i <= n1)
    {
        c[k][0] = a[i][0];
        c[k][1] = a[i][1];
        c[k][2] = a[i][2];
        i++;
        k++;
    }

    while(j <= n2)
    {
        c[k][0] = b[j][0];
        c[k][1] = b[j][1];
        c[k][2] = b[j][2];
        j++;
        k++;
    }

    cout << "Result:\n";

    for(int x = 1; x < k; x++)
        cout << c[x][0] << " "
             << c[x][1] << " "
             << c[x][2] << endl;

    return 0;
}