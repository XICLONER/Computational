#include <iostream>

using namespace std;

int main()
{
    int first_matrix_row;
    int first_matrix_col;
    int second_matrix_row;
    int second_matrix_col;
    int first_matrix[first_matrix_row][first_matrix_col];
    int second_matrix[second_matrix_row][second_matrix_col];

    cout << "How many rows do your first matrix have?\n";
    cin >> first_matrix_row;

    cout << "How many columns do your first matrix have?\n";
    cin >> first_matrix_col;

    cout << "How many rows do your second matrix have?\n";
    cin >> second_matrix_row;

    cout << "How many columns do your second matrix have?\n";
    cin >> second_matrix_col;

    if (first_matrix_col == second_matrix_row)
    {
        cout << "Your first matrix is " << first_matrix_row << "*" << first_matrix_col << " and second matrix is "
             << second_matrix_row << "*" << second_matrix_col << "\n";
    }

    else
    {
        cout << "First matrix's columns must be equal with second matrix's rows\n";
        return 0;
    }

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
}
