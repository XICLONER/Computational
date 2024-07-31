#include <iostream>

using namespace std;

int main()
{
    int temperature;
    int result;

    cout << "enter the temperature: \n";
    cin >> temperature;

    result = (temperature * 1.8) + 32;
    cout << result << "\n";
    return 0;
}