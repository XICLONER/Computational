#include <iostream>

using namespace std;

int main()
{
    int first_num;
    int second_num;
    char sign;
    int restult;

    cout << "please enter the first number:\n";
    cin >> first_num;

    cout << "choose an operator between + - * / ^ :\n";
    cin >> sign;

    cout << "please enter the second number:\n";
    cin >> second_num;

    if (sign == '+')
    {
        restult = first_num + second_num;
        cout << restult << "\n";
        return 0;
    }

    if (sign == '-')
    {
        restult = first_num - second_num;
        cout << restult << "\n";
        return 0;
    }

    if (sign == '*')
    {
        restult = first_num * second_num;
        cout << restult << "\n";
        return 0;
    }

    if (sign == '/')
    {
        restult = first_num / second_num;
        cout << restult << "\n";
        return 0;
    }

    if (sign == '^')
    {
        restult = first_num ^ second_num;
        cout << restult << "\n";
        return 0;
    }
}