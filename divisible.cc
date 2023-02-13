#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers:\n";
    cin >> a >> b;

    if (b == 0)
    {
        cout << "\t" << "Error\n";
        return 0;
    }

    if (a % b == 0)
    {
        cout << "\t" << a << " is divisible to " << b << "\n";
    }
    else
    {
        cout << "\t" << a << " is not divisible to " << b << "\n";
    }
    
    return 0;
}
