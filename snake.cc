#include <iostream>
using namespace std;

int main()
{
    char directions[] = {'w', 's', 'd', 'a'};
    char input;

    cout << "Which direction? (w , s , d , a):\n";
    cin >> input;

    for (int i = 0; i < 4; i++)
    {
        if (input == directions[0])
        {
            cout << "Up\n";

            break;
        }

        if (input == directions[1])
        {
            cout << "Down\n";

            break;
        }

        if (input == directions[2])
        {
            cout << "Right\n";

            break;
        }

        if (input == directions[3])
        {
            cout << "Left\n";

            break;
        }
    }
}