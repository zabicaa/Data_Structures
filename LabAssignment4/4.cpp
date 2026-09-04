#include <iostream>
#include <queue>
using namespace std;

int main() {
    string str;

    cout << "Enter string: ";
    cin >> str;

    int frequency[256] = {0};
    queue<char> q;

    for (char ch : str) {

        // Increase frequency
        frequency[ch]++;

        // Add character to queue
        q.push(ch);

        // Remove repeating characters
        while (!q.empty() && frequency[q.front()] > 1) {
            q.pop();
        }

        // Print first non-repeating character
        if (q.empty())
            cout << "-1 ";
        else
            cout << q.front() << " ";
    }

    return 0;
}