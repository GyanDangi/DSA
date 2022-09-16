#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Array print:"<<endl;
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void ReverseArray(int arr[], int size){
    int start=0;
    int end=size-1;
    cout<<"Reverse ";
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
        

int  main(){


    int num[10]={1,2,3,4, 5, 6,7,8,9,10};
    ReverseArray(num, 10);
    printArray(num, 10);
    int arr[5]={ 1,2,3,4, 5};
    ReverseArray(arr,5);
    printArray(arr, 5);
    return 0;
}