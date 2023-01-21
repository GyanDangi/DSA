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
    // Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
    {
        // code here
        vector<int> ans;
        int row = r;
        int col = c;

        int total = row * col;
        int count = 0;

        // Indexing:
        int firstrow = 0;
        int firstcol = 0;
        int lastrow = row - 1;
        int lastcol = col - 1;

        while (count < total)
        {

            // printing firstrow:
            for (int i = firstcol; count < total && i <= lastcol; i++)
            {
                ans.push_back(matrix[firstrow][i]);
                count++;
            }
            firstrow++;

            for (int i = firstrow; count < total && i <= lastrow; i++)
            {
                ans.push_back(matrix[i][lastcol]);
                count++;
            }
            lastcol--;

            // lastrow:
            for (int i = lastcol; count < total && i >= firstcol; i--)
            {
                ans.push_back(matrix[lastrow][i]);
                count++;
            }
            lastrow--;

            for (int i = lastrow; count < total && i >= firstrow; i--)
            {
                ans.push_back(matrix[i][firstcol]);
                count++;
            }
            firstcol++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int r, c;
    cout << "enter row:";
    cin >> r;
    cout << "enter col:";
    cin >> c;
    vector<vector<int>> matrix(r);

    cout << "enter the elements of matrix:" << endl;
    for (int i = 0; i < r; i++)
    {
        matrix[i].assign(c, 0);
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution ob;
    cout << "matrix:" << endl;
    ob.PrintMatrix(matrix, r, c);
    cout << "spiral Print:" << endl;
    vector<int> result = ob.spirallyTraverse(matrix, r, c);
    for (int i = 0; i < result.size(); ++i)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
// } Driver Code Ends