#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        for (int j = 0; j < n-i; j++)
        {
            // Process Elements till n-1 index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
}


int main(){

    int arr[5]={3,4,5,1,2};
    printArray(arr,5);
    bubbleSort(arr, 5);
    printArray(arr,5);


    return 0;
}