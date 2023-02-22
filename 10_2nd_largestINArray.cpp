#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){


    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
}

// Approach:-01
int getLargest(int *arr, int n){

    int largestIndex=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[largestIndex]){
            largestIndex=i;
        }
    }
    return largestIndex;
    
}

int secondLargest(int *arr, int n){

    int result=-1;
    int largest=getLargest(arr, n);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=arr[largest]){

            // check karo kya resutl abhi -1 hai:
            if(result==-1){
                result=i;
            }
            else if(arr[i]>arr[result]){
                result=i;
            }
        }
    }
    return arr[result];
    
}
int main() {

    int arr[6]={12,5,12,20,218,9};
    printArray(arr, 6);
    cout<<"LargestIndex:";
    cout<<getLargest(arr, 6)<<endl;
    cout<<"largest element:"<<endl;
    cout<<secondLargest(arr, 6)<<endl;

return 0;
}