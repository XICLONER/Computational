#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int delta;
    int x;
    int square_delta;
    int power_b;

    cout << "Enter a : \n";
    cin >> a;

    if (a == 0 || a < 0)
    {
        cout << "a must be a posetive number";
        return 0;
    }

    cout << "Enter b : \n";
    cin >> b;

    power_b = pow(b, 2);

    cout << "Enter c : \n";
    cin >> c;

    delta = power_b - (4 * a * c);

    square_delta = sqrt(delta);

    if (delta < 0)
    {
        cout << "The equation has no answer.\n";
        return 0;
    }

    if (delta == 0)
    {
        x = -(b) / (2 * a);
        cout << "There is one answer, it's " << x << "\n";
        return 0;
    }

    if (delta > 0)
    {
        x = -(b) + (square_delta) / (2 * a);

        cout << "There is two answer\n";

        cout << "x = " << x << "\n";

        x = 0;

        x = -(b) - (square_delta) / (2 * a);

        cout << "or \n"
             << "x is = " << x << "\n";

        return 0;
    }
}