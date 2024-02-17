#include <iostream>
using namespace std;

// printing 2D matrix Function
void printArray(int **arr, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// printing row wise sum
int Row_Sum(int **arr, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << i + 1 << " row : " << sum << endl;
    }
}

// printing column wise sum
int Column_Sum(int **arr, int row, int column)
{
    for (int i = 0; i < column; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of " << i + 1 << " column : " << sum << endl;
    }
}

int main()
{
    int row, column;

    cout << "Enter Number of Row for 2D Matrix: ";
    cin >> row;

    cout << "Enter Number of Column for 2D Matrix: ";
    cin >> column;

    // Allocate memory for the 2D matrix
    int **arr = new int *[row];
    for (int i = 0; i < row; ++i)
    {
        arr[i] = new int[column];
    }

    // taking input element of matrix
    cout << "Enter Element of Matrix: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "2D Matrix: " << endl;
    printArray(arr, row, column);
    cout << endl;

    cout << "Sum of all element Row Wise: " << endl;
    Row_Sum(arr, row, column);
    cout << endl;

    cout << "Sum of all element Column Wise: " << endl;
    Column_Sum(arr, row, column);
    cout << endl;
}