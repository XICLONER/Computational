#include <iostream>
using namespace std;

int main()
{
    int numbers[3];

    cout << "Enter 3 numbers:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    return 0;
}
