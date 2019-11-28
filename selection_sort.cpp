#include <iostream>
using namespace std;
int main()
{
    int a[20], temp, i = 0, j = 0, n, min = 0, pos = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " Elements\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Before Sorting\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    for (i = 0; i <= n; i++)
    {
        min = a[i];
        pos = i;

        for (j = i; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                pos = j;
            }
        }

        if (pos != 1)
        {
            temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
    }

    cout << "After Sorting\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}