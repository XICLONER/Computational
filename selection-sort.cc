#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "How many numbers do you wana enter:\n";
    cin >> n;

    int numbers[n];

    cout << "Enter your numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
}
