#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, n, i;

    cout << "Enter the length of the series- ";
    cin >> n;

    cout << a << "\t" << b;

    for (i = 1; i < n - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;

        cout << "\t" << c;
    }

    cout << "\n";
}