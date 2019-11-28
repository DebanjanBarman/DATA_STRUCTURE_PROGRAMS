#include <iostream>
using namespace std;

int main()
{
    int arr[50], len, n, loc, flag = 0;

    cout << "Enter the size: ";
    cin >> len;
    cout << "Enter the Elements : \n";

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    cout << "List of the Elements : \n";

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\nEnter the item for search: \n";
    cin >> n;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == n)
        {
            loc = i;
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "item not found\n";
    }
    else
    {
        cout << "\nItem found at " << loc + 1 << " position" << endl;
    }
}