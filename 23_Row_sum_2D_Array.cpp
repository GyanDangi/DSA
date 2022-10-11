#include <iostream>
using namespace std;

    void rowSum(int matrix[][3], int rows, int cols){

        // int sum=0; when we want 1 st sum also.
        for (int i = 0; i < 3; i++)
        {
            int sum=0;
            for (int j= 0; j < 3; j++)
            {
                    // sum=sum+matrix[i][j];
                    sum += matrix[i][j];
            }
            cout<<sum<<endl;
            
        }
        
    }


int main(){

    int arr[3][3];

    cout<<"Enter the elements:"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Printing 2D-Array"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"the row-wise sum of the 2D-Array is:"<<endl;
    rowSum(arr,3,3);


    return 0;
}