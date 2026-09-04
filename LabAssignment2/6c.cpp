// 6(c) Multiplication of two matrices.

#include <iostream>
using namespace std;

int main()
{
    int a[10][10] = {0};
    int b[10][10] = {0};
    int c[10][10] = {0};

    int r1, c1, n1;
    int r2, c2, n2;

    cout << "Enter rows, columns and non-zero elements of A: ";
    cin >> r1 >> c1 >> n1;

    cout << "Enter triplets of A:\n";

    for(int i = 0; i < n1; i++)
    {
        int r, c, value;
        cin >> r >> c >> value;
        a[r][c] = value;
    }

    cout << "Enter rows, columns and non-zero elements of B: ";
    cin >> r2 >> c2 >> n2;

    cout << "Enter triplets of B:\n";

    for(int i = 0; i < n2; i++)
    {
        int r, c, value;
        cin >> r >> c >> value;
        b[r][c] = value;
    }

    if(c1 != r2)
    {
        cout << "Multiplication not possible.";
        return 0;
    }

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            for(int k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    cout << "Result:\n";

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
            if(c[i][j] != 0)
                cout << i << " "
                     << j << " "
                     << c[i][j] << endl;
    }

    return 0;
}