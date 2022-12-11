#include <iostream>
using namespace std;

int main(){

   /* int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    // 2D array Creation:
    int **arr=new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int [n];
    }
    // Taking Input:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    // Showing Output:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    */
   // For Different numbers of Rows and columns..
    int row;
    cout<<"enter the rows:"<<endl;
    cin>>row;
    int col;
    cout<<"enter the columns:"<<endl;
    cin>>col;
    // 2D array Creation:
    int **arr=new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i]=new int [col];
    }
    // Taking Input:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    // Showing Output:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    


    return 0;
}