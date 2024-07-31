#include <iostream>

using namespace std;

int main()
{
    int temperature;
    int result;

    cout << "enter the temperature: \n";
    cin >> temperature;

    result = (temperature - 32) * 0.5;
    cout << result << "\n";
    return 0;
}