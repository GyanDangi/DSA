#include <iostream>
using namespace std;

void wavePrint(int matrix[][3], int rows, int cols)
{

    for (int i = 0; i < cols; i++)
    {
        if (i & 1)
        {
            for (int j = rows - 1; j >= 0; j--)
            {
                cout << matrix[j][i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < rows; j++)
            {
                cout << matrix[j][i] << " ";
            }
            cout << endl;
        }
    }
}

void PrintMatrix(int matrix[][3], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    // int rows;
    // cout<<"enter rows:";
    // cin>>rows;
    // int cols;
    // cout<<"enter cols";
    // cin>>cols;
    int matrix[3][3];
    cout << "enter the matrix element:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    PrintMatrix(matrix, 3, 3);
    cout << "WavePrint" << endl;
    wavePrint(matrix, 3, 3);

    return 0;
}