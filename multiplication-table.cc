#include <iostream>

using namespace std;

int main()
{

    int n, br, row;
    br = 0;
    row = 1;

    cout << "What number's multiplication table do you want?(between 1 to 10):\n";
    cin >> n;
    cout << endl;

    if (n > 10 || n < 1)
    {
        cout << "I said (between 1 to 10) idiot!\n";

        return 0;
    }

    for (int c = 1; c <= n; c++) // column
    {
        cout << "\t" << c;
    }
    cout << "\n\n\n";

    for (int p1 = 1; p1 <= n; p1++)
    {
        cout << row << "\t";

        for (int p2 = 1; p2 <= n; p2++)
        {

            cout << p1 * p2 << "\t";
            br++;

            if (br == n)
            {
                br = 0;
                row++;
                cout << "\n\n\n";
            }
        }
    }

    return 0;
}