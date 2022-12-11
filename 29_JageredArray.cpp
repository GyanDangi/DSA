#include <iostream> 
using namespace std;


int main(){
   
    int row;
    cout<<"enter the numbers of rows:"<<endl;
    cin>>row;
    int *num=new int [row];
    int**arr= new int *[row];

    //Creating:

    for (int i = 0; i < row; i++)
    {
        cout<<"enter the numbers of cols in rows:"<<i+1<<endl;
        cin>>num[i];
        arr[i]=new int[num[i]];
    }
    // Taking Input:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < num[i]; j++)
        {
           cin>>arr[i][j];
        }
        
    }
    // Output:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < num[i]; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
        
    }
    
    
    
    
    return 0;
}