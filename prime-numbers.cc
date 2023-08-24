#include <iostream>

using namespace std;

int main()
{
    int n, x;
    x = 0;

    bool isNotPrime;

    cout << "How many numbers do you want to enter:\n";
    cin >> n;
    int numbers[n];

    cout << "\nEnter your numbers:\n";
    for (int i = 0; i < n; i++)
    {

        cin >> numbers[i];
    }
    cout << "\n";

    for (int z = 0; z < n; z++)
    {
        isNotPrime = false;

        for (int i = 2; i <= n - 1; i++)
        {

            if (numbers[z] % i == 0)
            {
                cout << numbers[z] << "\tis not prime \n";
                isNotPrime = true;

                break;
            }
        }

        if (isNotPrime == false)
        {
            cout << numbers[z] << "\tis prime \n";
            x++;
        }
    }
    cout << "\tThere is " << x << " prime numbers\n";

    return 0;
}