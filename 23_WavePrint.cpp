#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>>matrix, int nrows, int ncols)
{
    vector<int> ans;
    for (int col = 0; col < ncols; col++)
    {
        // Odd index cols.
        // Bottom to top.
        if (col&1)
        {
            for (int row = nrows-1; row >= 0; row--)
            {
                cout << matrix[row][col] << " ";
                // ans.push_back(matrix[row][col]);
            }
            cout << endl;
        }
        // Even Index column
        //top to bottom
        else
        {
            for (int row = 0; row < nrows; row++)
            {
                cout << matrix[row][col] << " ";
                // ans.push_back(matrix[row][col]);
            }
            cout << endl;
        }
    }
   
}

void printMatrix(vector<vector<int>> matrix, int rows, int cols)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    
    vector<vector<int>> matrix;

    // Input:
    // cout<<(3&1);
    cout << "enter elements of matrix:";
    
    for (int i = 0; i < 3; i++)  
    {
      vector<int> temp;
      for (int j = 0; j < 3; j++)
      {
        int x;
        cin>>x;
        temp.push_back(x);
      }
      matrix.push_back(temp);
      
    }
    printMatrix(matrix, 3,3);
    cout<<"Wave Print"<<endl;
    wavePrint(matrix, 3, 3);
    // printMatrix(matrix, 3,4);
  
    
    return 0;
}