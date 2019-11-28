#include <iostream>
using namespace std;
int main()
{
    int n, temp, rev = 0;

    cout << "Enter the number you want to reverse- ";
    cin >> n;
    temp = n;

    while (temp > 0)
    {
        rev = rev * 10;
        rev = rev + temp % 10;
        temp = temp / 10;
    }
    cout << "Reverse of " << n << " is " << rev << endl;
}