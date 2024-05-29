#include <iostream>
using namespace std;

int main()
{
    int average;
    int num;
    average = 0;
    cout << "How many numbers do you want to enter?" << "\n";
    cin >> num;

    int numbers[num];
    int sum = 0;

    cout << "Enter the numbers:" << "\n";
    for (int i = 0; i < num; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum of entered numbers: " << sum << "\n";
    average = sum / num;
    cout << "Approximate average is " << average << "\n";

    return 0;
}
