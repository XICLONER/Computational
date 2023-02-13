#include <iostream>

using namespace std;

int main()
{
    int p1, p2, p3;

    // how many numbers of Fibonacci we want to print
    short int n;

    cout << "How many numbers of Fibonacci do you want to pring? (between 0 and 32)\n";
    cin >> n;
    cout << endl;

    if (n < 0 || n > 32) {
        cout << "Invalid input\n";
        return 0;
    }

    p1 = 1;
    p2 = 1;

    cout << p1 << "\n" << p2 << "\n";

    for (int i = 0; i < n - 2; i++) {
        cout << p1 + p2 << "\n";
        
        p3 = p1 + p2;
        p1 = p2;
        p2 = p3;
    }

    return 0;
}
