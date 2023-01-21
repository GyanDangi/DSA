// Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void PrintMatrix(vector<vector<int>> matrix, int rows, int cols)
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
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>> &matrix, int n)
    {

        // Transpose:
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // swap rows :
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n - i - 1][j];
                matrix[n - i - 1][j] = temp;
                // swap(matrix[i][j],matrix[n-i-1][j]);
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int n;
    cout<<"enter the row size:"<<endl;
    cin >> n;
    vector<vector<int>> matrix(n);
    cout<<"enter the matrix elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        matrix[i].assign(n, 0);
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution ob;
    cout<<"original matrix:"<<endl;
    ob.PrintMatrix(matrix,n,n);
    cout<<"matrix after rotation of 90 degree anticlock-wise:"<<endl;
    ob.rotateby90(matrix, n);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){

            cout << matrix[i][j] << " ";
        }
    cout << endl;
    }
    return 0;
}
// } Driver Code Ends