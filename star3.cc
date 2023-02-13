#include <iostream>
using namespace std;

void column(int i, int n)
{
    for (int j = 0; j < n - i + 1; j++)
    {
        cout << "  ";
    }

    for (int j = 0; j < i; j++)
    {
        cout << "* ";
    }
    cout << "\n";
}

int main()
{
    int n;

    cout << "How many row you want:\n";
    cin >> n;

    if (n == 0)
    {
        cout << "you want 0 row?! seriously?\n";
    }

    for (int i = 1; i <= n; i++)
    {
        column(i, n);
    }
    return 0;
}