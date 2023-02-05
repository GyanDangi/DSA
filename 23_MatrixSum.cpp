#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];

    cout<<"enter elements for matrix 1:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout<<"matrix 1 is:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"enter elements for matrix 2:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout<<"matrix 2 is:"<<endl;
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"after addition of both matrix is:"<<endl;
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           arr3[i][j]=(arr1[i][j]+arr2[i][j]);
           cout<<arr3[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}