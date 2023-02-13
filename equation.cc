#include <iostream>
#include <math.h>

using namespace std;

float convertToRadian(int degree)
{
    float radian;
    radian = (degree * 3.14) / 180;

    return radian;
}

int main()
{
    int range, v1, q1, q2;

    const int g = 9.8;

    cout << "Enter q1: ";
    cin >> q1;

    cout << "Enter q2: ";
    cin >> q2;

    if (q2 < q1)
    {
        cout << "q2 should be bigger than q1";

        cout << "\n";

        return 0;
    }

    cout << "Enter v1: ";
    cin >> v1;

    range = (((2 * (v1 * v1)) * cos(convertToRadian(q2))) / (g * pow(cos(convertToRadian(q1)), 2))) * sin(convertToRadian(q2 - q1));
    cout << "range is: " << range;

    cout << "\n";

    return 0;
}