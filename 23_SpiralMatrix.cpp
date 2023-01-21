#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

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
void printVector(vector<int> v){

    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
}

vector<int> spiralPrint(vector<vector<int>> matrix)
{

    /*
    1 2 3
    4 5 6
    7 8 9

    */
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    // Indexing:
    int firstrow = 0;
    int firstcol = 0;
    int lastrow = row - 1;
    int lastcol = col - 1;

    while (count < total)
    {

        // Print first row:
        for (int i = firstcol; count < total && i < lastcol; i++)
        {
            ans.push_back(matrix[firstrow][i]);
            count++;
        }
        firstrow++;

        // Print lastcolumn:
        for (int i = firstrow; count < total && i < lastrow; i++)
        {
            ans.push_back(matrix[i][lastcol]);
            count++;
        }
        lastcol--;

        // Printing lastrow:
        for (int i = lastcol; count < total && i >= firstcol; i--)
        {
            ans.push_back(matrix[lastrow][i]);
            count++;
        }
        lastrow--;

        // Printing firstcol:
        for (int i = lastrow; count < total && i >= firstrow; i--)
        {
            ans.push_back(matrix[i][firstcol]);
            count++;
        }
        firstcol++;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter size of row:";
    cin >> n;
    vector<vector<int>> v;
    cout << "Enter element:" << endl;
    for (int i = 0; i < n; i++)
    {

        vector<int> x;
        for (int j = 0; j < n; j++)
        {
            int value;
            cin >> value;
            x.push_back(value);
        }

        v.push_back(x);
    }

    PrintMatrix(v, n, n);
    printVector(spiralPrint(v));
    return 0;
}