#include <iostream>

using namespace std;

void printArray(int *x, int row, int col)
{
    for (short int i = 0; i < row; i++)
    {
        for (short int j = 0; j < col; j++)
        {
            cout << *x << "\t";
            x++;
        }

        cout << "\n";
    }
}

int main()
{
    int row;
    int col;

    cout << "how many row?\n";
    cin >> row;

    cout << "how many column?\n";
    cin >> col;

    int matrix[row][col];

    cout << "enter your first matrix elements:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    printArray((int *)matrix, row, col);

    return 0;
}
