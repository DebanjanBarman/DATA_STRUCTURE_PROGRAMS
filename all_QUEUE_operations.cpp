#include <iostream>

using namespace std;
#define MAX 10
int front = -1, queue[MAX], rear = -1;

int enque();
int deque();
int display();

int main()
{
    int n;

    while (1)
    {
        cout << "-----Queue MEnu-----\n1-Enque\n2-Deque\n3-Display\n-Exit\n\n>>";
        cin >> n;

        switch (n)
        {
        case 1:
            enque();
            break;

        case 2:
            deque();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
        default:
            cout << "Wrong choice\n";
        }
    }
    return 0;
}

int enque()
{
    int n;

    if (front == MAX)
    {
        cout << "Queue Overflow\n";
    }
    else
    {
        if (front == -1)
            front = 0;

        cout << "Enter the number \n";
        cin >> n;

        rear += 1;
        queue[rear] = n;
    }

    return 0;
}

int deque()
{
    if (front == -1)
    {
        cout << "Queue Underflow\n";
        return 0;
    }
    else
    {

        cout << "deleted item is " << queue[front] << endl;
        front++;
    }
}

int display()
{
    if (front == -1)
        cout << "Queue Underflow";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << endl;
    }

    return 0;
}