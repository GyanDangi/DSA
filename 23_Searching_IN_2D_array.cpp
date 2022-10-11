#include <iostream> 
using namespace std;


bool isFound(int arr[][4], int target, int rows, int cols){
        
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if(arr[i][j]==target){
                    return 1;
                }
            }
            
        }
        return 0;
        
}




int main(){
   
    int arr[3][4];
    cout<<"Enter the matrix elements:";

    // Taking Input rows wise:
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Printing 2-D Array or Matrix"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    int target;
    cout<<"enter element to search in Matrix:";
    cin>>target;

    if(isFound(arr,target, 3, 4)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

  
    
    


    return 0;
}