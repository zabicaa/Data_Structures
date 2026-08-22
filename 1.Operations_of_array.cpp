#include <iostream>
using namespace std;

int main()
{
    int a[100], n = 0, choice, pos, value, key;

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter size: ";
                cin >> n;

                cout << "Enter elements: ";
                for(int i = 0; i < n; i++)
                    cin >> a[i];
                break;

            case 2:
                cout << "Array: ";
                for(int i = 0; i < n; i++)
                    cout << a[i] << " ";
                break;

            case 3:
                cout << "Enter position: ";
                cin >> pos;

                cout << "Enter value: ";
                cin >> value;

                for(int i = n; i >= pos; i--)
                    a[i] = a[i - 1];

                a[pos - 1] = value;
                n++;

                cout << "Element inserted.";
                break;

            case 4:
                cout << "Enter position: ";
                cin >> pos;

                for(int i = pos - 1; i < n - 1; i++)
                    a[i] = a[i + 1];

                n--;

                cout << "Element deleted.";
                break;

            case 5:
                cout << "Enter element to search: ";
                cin >> key;

                int found;
                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(a[i] == key)
                    {
                        cout << "Element found at position "
                             << i + 1;
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Element not found.";

                break;

            case 6:
                cout << "Exit";
                break;

            default:
                cout << "Invalid choice.";
        }

    } while(choice != 6);

    return 0;
}