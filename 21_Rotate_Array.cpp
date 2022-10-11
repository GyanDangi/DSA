// Problem :01
// We are going to rotate a given array.
// Example: Input: array[5]={4,3,5,2,1}
// Output: 1,2,5,3,4
#include <iostream>
using namespace std;

void PrintArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
    }
   cout<< endl;
}

void rotateArray(int arr[], int size){

    int s=0;
    int end=size-1;
    cout<<"After Rotation of Array:";
    while (s<=end)
    {
        swap(arr[s], arr[end]);
        s++; 
        end--;
    }
    
}

int main(){

    int arr[5]={1,2,4,5,3};
    PrintArray(arr,5);
    rotateArray(arr,5);
    PrintArray(arr,5);

    return 0;
}


