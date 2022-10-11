#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter rows and cols:";
    cin >> rows >> cols;

    int arr[rows][cols];
    cout << "Enter the matrix elements:";

    // int arr2[3][4]={1,2,3,4,5,6,7,8,9,11,12,10};
    // int arr3[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    // Taking Input rows wise:
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Taking Input column wise:
    // for (int i = 0; i < cols; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         cin>>arr[j][i];
    //     }

    // }
    // Print 2-D array:

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         // cout<<arr2[i][j]<<" ";
    //         cout<<arr3[i][j]<<" ";
    //     }
    //     cout<<endl;

    // }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}