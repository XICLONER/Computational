#include <iostream>

using namespace std;

int main()
{
    int n;
    int current;

    cout << "How many numbers do you want to enter:\n";
    cin >> n;

    int numbers[n];

    cout << "Enter your numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int max = i;

        for (int j = i + 1; j < n; j++)
        {
            if (numbers[j] > numbers[max])
            {
                max = j;
            }
        }

        if (max != i)
        {
            current = numbers[i];
            numbers[i] = numbers[max];
            numbers[max] = current;
        }
    }

    cout << "Result is:\n";

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << "\n";
    }

    return 0;
}
