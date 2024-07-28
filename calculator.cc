#include <iostream>

using namespace std;

int main()
{
    int first_num;
    int second_num;
    char sign;
    int result;

    cout << "please enter the first number:\n";
    cin >> first_num;

    cout << "choose an operator between + - * / ^ :\n";
    cin >> sign;

    cout << "please enter the second number:\n";
    cin >> second_num;

    switch (sign)
    {
    case '+':
        result = first_num + second_num;
        cout << "the result is: " << result << "\n";

        break;

    case '-':
        result = first_num - second_num;
        cout << "the result is: " << result << "\n";

        break;

    case '*':
        result = first_num * second_num;
        cout << "the result is: " << result << "\n";

        break;

    case '/':
        result = first_num / second_num;
        cout << "the result is: " << result << "\n";

        break;

    case '^':
        result = first_num ^ second_num;
        cout << "the result is: " << result << "\n";

        break;

    default:
        cout << "I said choose an operator between + - * / ^ ";

        break;
    }
}