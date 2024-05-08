#include <iostream>

using namespace std;

int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digitsCount = countDigits(num);
    cout << "Number of digits in " << num << " is: " << digitsCount << endl;

    int digits[digitsCount];

    int temp = num;
    for (int i = digitsCount - 1; i >= 0; i--)
    {
        digits[i] = temp % 10;
        temp /= 10;
    }

    cout << "Digits of " << num << " are: ";
    for (int i = 0; i < digitsCount; i++)
    {
        cout << digits[i] << " ";
    }

    cout << "\nDigits of " << num << " in reverse order are: ";
    for (int i = digitsCount - 1; i >= 0; i--)
    {
        cout << digits[i] << " ";
    }

    if (digits[0] == digits[digitsCount - 1])
        cout << "\nThis number is Palindrome" << endl;
    else
        cout << "\nThis number is not Palindrome" << endl;

    cout << endl;

    return 0;
}