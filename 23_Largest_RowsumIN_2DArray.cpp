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

int largestRowSum(int matrix[][3],int rows, int cols){

    int maxi=INT32_MIN;
    int rowIndex=-1;
    for (int i = 0; i < 3; i++)
    {   
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum+=matrix[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
        
    }
    cout<<"The maximum sum of the row is:"<<maxi<<endl;
    return rowIndex;


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
    
    int ans=largestRowSum(arr, 3,3);
    cout<<ans;
    


    return 0;
}