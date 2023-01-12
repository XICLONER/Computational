#include <iostream>
using namespace std;
int main()
{
    int a, b, n;

    a = 0;
    b = 0;

    cout << "How many numbers do you wana enter:\n";
    cin >> n;

    int numbers[n];

    cout << "Enter your numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            cout << "\t" << numbers[i] << " is even";
            a++;
        }
        else
        {
            cout << "\t" << numbers[i] << " is odd";
            b++;
        }
    }
    cout << "\n"
         << a << " of numbers are even.";
    cout << "\n"
         << b << " of numbers are odd."
                 "\n";
    return 0;
}
