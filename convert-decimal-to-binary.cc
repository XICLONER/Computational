#include <iostream>
using namespace std;

int main()
{
    int n, x, j, z;
    j = 0;

    int reminders[20];
    cout << "Enter a number: ";
    cin >> n;

    while (true)
    {

        x = n / 2;
        reminders[j] = n % 2;
        j++;
        if (x == 0)
        {
            for (z = j - 1; z >= 0; z--)
            {
                cout << reminders[z];
            }

            cout << "\n";

            return 0;
        }

        else
        {
            n = x;
        }
    }
}