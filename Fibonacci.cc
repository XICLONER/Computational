#include <iostream>

using namespace std;

int main()
{
    int p1, p2, p3;

    p1 = 1;
    p2 = 1;

    cout << p1 << "\n" << p2 << "\n";

    for (int i = 0; i < 8; i++) {
        cout << p1 + p2 << "\n";
        
        p3 = p1 + p2;
        p1 = p2;
        p2 = p3;
    }

    return 0;
}
