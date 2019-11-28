#include <iostream>

using namespace std;

#define MAX 10

int top = -1, stack[MAX];

int main()
{
    int i, n;

    if (top == MAX - 1)
    {
        cout << "Stack full\n";
    }
    else
    {
        cout << "Enter  elements\n";
        for (i = 0; i < 5; i++)
        {
            cin >> n;
            top += 1;
            stack[top] = n;
        }
    }

    cout << "Before POP\n";

    for (i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
    if (top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Deleted element is " << stack[top] << endl;
        top -= 1;
    }

    cout << "After POP\n";

    for (i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}