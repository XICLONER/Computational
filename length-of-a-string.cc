#include <iostream>
using namespace std;
int main()
{
    string text;
    int count = 0;
    cout << "Please enter your text: \n";
    cin >> text;
    for (int i = 0; text[i]; i++)
    {
        count ++;
    }
    cout << count << "\n";
}