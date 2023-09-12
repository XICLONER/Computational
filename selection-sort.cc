#include <iostream>

using namespace std;

int main()
{
    int n;
    int assume;

    cout << "How many numbers do you wana enter:\n";
    cin >> n;

    int numbers[n];

    cout << "Enter your numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    assume = numbers[0];

    for (int i = 1; i <= n; i++)
    {
        if (assume > numbers[i])
        {
            assume = numbers[i];
        }
    }
    
    return 0;
}
