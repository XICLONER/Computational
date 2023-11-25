#include <iostream>

using namespace std;

int main()
{
    int first_matrix_row;
    int first_matrix_col;
    int second_matrix_row;
    int second_matrix_col;

    cout << "How many rows does your first matrix have?\n";
    cin >> first_matrix_row;

    cout << "How many columns does your first matrix have?\n";
    cin >> first_matrix_col;

    cout << "How many rows does your second matrix have?\n";
    cin >> second_matrix_row;

    cout << "How many columns does your second matrix have?\n";
    cin >> second_matrix_col;

    if (first_matrix_col != second_matrix_row)
    {
        cout << "The number of columns in the first matrix must be equal to the number of rows in the second matrix\n";
        return 0;
    }

    int first_matrix[first_matrix_row][first_matrix_col];
    int second_matrix[second_matrix_row][second_matrix_col];
    int multiplication_matrix[first_matrix_row][second_matrix_col];

    cout << "Enter your first matrix elements:\n";

    for (int i = 0; i < first_matrix_row; i++)
    {
        for (int j = 0; j < first_matrix_col; j++)
        {
            cin >> first_matrix[i][j];
        }
    }

    cout << "\nEnter your second matrix elements:\n";

    for (int i = 0; i < second_matrix_row; i++)
    {
        for (int j = 0; j < second_matrix_col; j++)
        {
            cin >> second_matrix[i][j];
        }
    }

    for (int i = 0; i < first_matrix_row; i++)
    {
        for (int j = 0; j < second_matrix_col; j++)
        {
            multiplication_matrix[i][j] = 0;
            for (int x = 0; x < first_matrix_col; x++)
            {
                multiplication_matrix[i][j] = multiplication_matrix[i][j] + first_matrix[i][x] * second_matrix[x][j];
            }
        }
    }

    cout << "\nResult of matrix multiplication:\n";
    for (int i = 0; i < first_matrix_row; i++)
    {
        for (int j = 0; j < second_matrix_col; j++)
        {
            cout << multiplication_matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
