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
    // Function to find transpose of a matrix.
    void transpose(vector<vector<int>> &matrix, int n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{

    int n;
    cout << "enter the row:";
    cin >> n;
    vector<vector<int>> matrix(n);
    cout << "enter the matrix element:" << endl;
    for (int i = 0; i < n; i++)
    {
        matrix[i].assign(n, 0);
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution ob;
    cout << "orignal martix:" << endl;
    ob.PrintMatrix(matrix, n, n);
    cout << "tranpose matrix:" << endl;
    ob.transpose(matrix, n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends