//Delete an Element In a Specified Position Using Array

#include <iostream>

using namespace std;

int main()
{

    int n, pos, i, arr[50];

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

    cout << "Enter the position where you want to delete: ";
    cin >> pos;

    for (i = pos; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    cout << "\nFinal Output: \n\n";
    for (i = 0; i < n - 1; i++)
    {
        cout << arr[i] << endl;
    }
}