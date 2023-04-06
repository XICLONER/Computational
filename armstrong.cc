#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int dividend, divisor, figures, firstDivisor, plus, result;
    figures = 0;
    int reminder[10];
    int Pow[10];
    plus = 0;

    cout << "Enter a number:\n";
    cin >> divisor;

    firstDivisor = divisor;
    result = divisor;

    while (true)
    {
        dividend = divisor / 10;
        figures++;

        if (dividend == 0)
        {

            cout << "Your number have " << figures << " figures\n";
            for (int i = 0; i < figures; i++)
            {

                reminder[i] = firstDivisor % 10;
                firstDivisor = firstDivisor / 10;
                if (firstDivisor == 0)
                {
                    for (int i = 0; i < figures; i++)
                    {

                        Pow[i] = pow(reminder[i], figures);
                        cout << Pow[i] << " ";
                    }
                    for (int i = 0; i < figures; i++)
                    {
                        plus += Pow[i];
                    }

                    cout << "\n";
                }
            }
            break;
        }

        divisor = dividend;
    }
    cout << plus << "\n";
    if (plus == result)
    {
        cout << result << " is armstrog\n";
    }
    else
    {
        cout << result << " is not armstrog\n";
    }
}
