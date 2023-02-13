#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {5, 6, 9, 4, 7, 55, 33, 15, 46, 0};
    int current;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (numbers[i] < numbers[j])
            {
                current = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = current;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "\t" << numbers[i] << "\n";
    }

    return 0;
}
