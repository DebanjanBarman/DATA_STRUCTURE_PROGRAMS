// Not Completed 


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

    int beg = 0, end = n - 1, mid = (beg + end) / 2, item;

    cout << "Enter The Item\n";
    cin >> item;

    while (beg <= end)
    {
        if (array[mid] < item)
        {
            beg = mid + 1;
        }
        else if (array[mid == item])
        {

            cout << "Item found at " << mid + 1 << endl;
            break;
        }
        else
        {
            end = mid - 1;
        }
        mid = (beg + end) / 2;
    }
    if (beg > end)
    {
        cout << "item not found\n";
    }
}