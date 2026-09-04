//(6)Write a program to implement the following operations on a Sparse Matrix, assuming the matrix is represented using a triplet.

//(a) Transpose of a matrix.

#include <iostream>
using namespace std;

int main()
{
    int a[50][3], t[50][3];
    int rows, cols, nonZero;

    cout << "Enter rows, columns and non-zero elements: ";
    cin >> rows >> cols >> nonZero;

    a[0][0] = rows;
    a[0][1] = cols;
    a[0][2] = nonZero;

    cout << "Enter triplets (row column value):\n";

    for(int i = 1; i <= nonZero; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2];

    t[0][0] = cols;
    t[0][1] = rows;
    t[0][2] = nonZero;

    int k = 1;

    for(int j = 0; j < cols; j++)
    {
        for(int i = 1; i <= nonZero; i++)
        {
            if(a[i][1] == j)
            {
                t[k][0] = a[i][1];
                t[k][1] = a[i][0];
                t[k][2] = a[i][2];
                k++;
            }
        }
    }

    cout << "Transpose:\n";

    for(int i = 0; i <= nonZero; i++)
        cout << t[i][0] << " "
             << t[i][1] << " "
             << t[i][2] << endl;

    return 0;
}