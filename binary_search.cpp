#include <iostream>
using namespace std;
int main()
{
    int a[20], n, i = 0, j = 0, temp = 0, mid, beg, end, item, loc;
    cout << "Enter the number of elements\n";
    cin >> n;

    cout << "Enter " << n << " elements\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "After Sorting\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;

    cout << "Enter an element to search\n";
    cin >> item;

    while (beg <= end)
    {
        if (a[mid] < item)
        {
            beg = mid + 1;
        }
        else if (a[mid] == item)
        {
            cout << item << " Found at location " << mid + 1 << "\n";
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
        cout << item << " Not Found in the array\n";
    }
}