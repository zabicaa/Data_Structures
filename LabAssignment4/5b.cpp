#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;

public:

    void push(int x) {
        int n = q.size();

        // Insert new element
        q.push(x);

        // Move previous elements behind new element
        for (int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (q.empty()) {
            cout << "Stack is Empty\n";
            return;
        }

        cout << q.front() << " popped\n";
        q.pop();
    }

    void peek() {
        if (q.empty()) {
            cout << "Stack is Empty\n";
        } else {
            cout << "Top element = " << q.front() << endl;
        }
    }

    bool isEmpty() {
        return q.empty();
    }

    void display() {
        if (q.empty()) {
            cout << "Stack is Empty\n";
            return;
        }

        queue<int> temp = q;

        cout << "Stack: ";

        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}