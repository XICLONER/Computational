#include <iostream>
using namespace std;
int main()
{
    int redius;
    int diameter;
    int area;
    int circumference;

    cout << "enter the redius:\n";
    cin >> redius;
    diameter = redius + redius;
    
    area = 2 * 3.14 * redius;
    cout << area << "\n";

    circumference = ((diameter * diameter) * 3.14) / 4;
    cout << circumference << "\n";

    return 0;
}