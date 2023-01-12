#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "How many numbers you want enter:\n";
    cin >> n;
    int numbers[n];

    cout << "enter your numbers:\n";

    for (int i = 0; i < n; i++)

        cin >> numbers[i];

    for (int i = n - 1; i >= 0; i--)

        cout << "\t" << numbers[i] << "\n";
    return 0;
}