#include <iostream>
using namespace std;

int main()
{
    int array[100], i, j, n, c, d, swap;

    cout << "Enter number of elements\n";
    cin >> n;
    cout << "Enter " << n << " integers\n";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    cout << "Sorted list in ascending order:\n";

    for (i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}