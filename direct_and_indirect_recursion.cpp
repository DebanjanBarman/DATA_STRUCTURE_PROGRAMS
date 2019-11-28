#include <iostream>

using namespace std;
int direct(int);
int indirect(int);

int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Example of direct recursion\n\n";
    direct(a);
    cout << "Example of indirect recursion\n\n";
    indirect(a);
}

int direct(int a)
{

    while (a > 0)
    {
        cout << a << endl;
        a -= 1;
        direct(a);
        break;
    }
}
int indirect(int a)
{
    direct(a);
}