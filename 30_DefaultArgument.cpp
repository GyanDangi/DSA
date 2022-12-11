#include <iostream>
using namespace std;

    void PrintArray(int *arr, int size, int start=0){

        for (int i = start; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }

int main(){

    int arr[4]={1,2,3,4};
    PrintArray(arr,4);// Start=0 default is passed.

    PrintArray(arr,4,2);// Start=2 is passed.

    return 0;
}