#include <iostream>
using namespace std;

int main()
{

    int n, pos, i, arr[50], no;

    cout << "Enter the no of elements: ";
    cin >> n;

    cout << "Enter the Numbers: \n";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nDisplaying Output: \n\n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Enter the indexed position where you want to insert: ";
    cin >> pos;

    cout << "Enter the number you want to insert: ";
    cin >> no;
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = no;

    cout << "\nFinal Output: \n\n";
    for (i = n; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}
