#include <iostream>
using namespace std;

void TOH(int, char, char, char);

int main()
{

    int n;
    cout << "Enter number of disk\n";
    cin >> n;

    cout << "_____Moves are_____\n";
    TOH(n, 'A', 'B', 'C');
    return 0;
}

void TOH(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "MOve disk 1 from " << from << " to " << to << endl;
        return;
    }

    TOH(n - 1, from, aux, to);
    cout << "MOve disk " << n << " from " << from << " to " << to << endl;
    TOH(n - 1, aux, to, from);
}
