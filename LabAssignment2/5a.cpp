// 5. Space required to store any two-dimensional array is number of rows × number of columns. 
//Assuming an array is used to store elements of the following matrices, 
//implement an efficient way that reduces the space requirement.
//(a) Diagonal Matrix


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int a[100];

    cout << "Enter diagonal elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
                cout << a[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}