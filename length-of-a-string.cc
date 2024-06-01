#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    cout << "Please enter your text: ";
    getline(cin, text);
    int length = text.length();
    cout << "The length of the string is: " << length << endl;
    return 0;
}