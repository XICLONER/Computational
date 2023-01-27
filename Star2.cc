#include <iostream>
using namespace std;

void column(int i, int n)
{
    for (int j = 0; j < n - i + 1; j++)
    {
        cout << "* ";
    }
    cout << "\n";
}

int main()
{
    int n;

    cout << "How many row:\n";
    cin >> n;

    if (n == 0)
    {
        cout << "Idiot!\n";
    }

    for (int i = 1; i <= n; i++)
    {
        column(i, n);
    }
    return 0;
}