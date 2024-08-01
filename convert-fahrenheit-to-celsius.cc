#include <iostream>

using namespace std;

int main()
{
    int temperature;
    int result;

    cout << "enter the temperature: \n";
    cin >> temperature;

    result = (temperature - 32) / 1.8;
    cout << result << "\n";
    return 0;
}