#include <iostream>
using namespace std;
int main()
{

    int fact = 1, i, n;

    cout << "Enter the number- ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {

        fact = fact * i;
    }

    cout << "\nFactorial of " << n << " is " << fact << endl;
}