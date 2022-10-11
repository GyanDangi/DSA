#include <iostream>
using namespace std;
// #define M 12;

void rowWiseSort(int martix[][3], int rows, int cols)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = j + 1; k <=3; k++)
            {
                if (martix[i][j] > martix[i][k])
                {
                    swap(martix[i][j], martix[i][k]);
                }
            }
        }
    }
    cout<<"Your matrix after sort is:"<<endl;
    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << martix[i][j] << " ";
            }
            cout << endl;
        }

}

    int main()
    {

        // int rows;
        // cout << "enter the numbers of rows:" << endl;
        // cin >> rows;
        // int cols;
        // cout << "enter the numbers of cols" << endl;
        // cin >> cols;
        int arr[3][3];
        cout << "enter the elements of the matrix" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
        
        rowWiseSort(arr,3,3);

        return 0;
    }