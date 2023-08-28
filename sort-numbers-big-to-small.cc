#include <iostream>

using namespace std;

int main()
{
    int n;
    int current;

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
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] < numbers[j])
            {
                current = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = current;
            }
        }
    }
        cout << "Result is:" << "\n";

    for (int i = 0; i < n; i++)
    {
        cout <<  numbers[i] << "\n";
    }

    return 0;
}
