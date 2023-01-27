#include <iostream>
using namespace std;

void column(int i, int n)
{
    for (int j = 0; j < i - 1; j++)
    {
        cout << "  ";
    }

    for (int j = 0; j < n - i + 1; j++)
    {
        cout << "* ";
    }
}

int main()
{
    int n;

    cout << "How many row you want:\n";
    cin >> n;

    if (n == 0)
    {
        cout << "and how should I make 0 row exactly?!\n";
    }

    for (int i = 1; i <= n; i++)
    {
        column(i, n);

        cout << "\n";
    }
    return 0;
}