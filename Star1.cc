#include <iostream>
using namespace std;

void column(int i)
{
    for (int j = 0; j < i; j++)
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
        cout << "0 row?! are you fool or somethig? change this shit!\n";
    }

    for (int i = 1; i <= n; i++)
    {
        column(i);
    }
    return 0;
}