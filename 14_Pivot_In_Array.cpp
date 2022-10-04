#include <iostream>
using namespace std;
// Code Studio Question : Search in rotated sorted Array.
// array={ 1,2,3,7,9} sorted array
// array={7,9,1,2,3} rotated+sorted array
// pivot element is 9/1 
int getPivot(int arr[], int size){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){

        if (arr[mid]>=arr[0])   
        {
        s=mid+1;
        }
        else{
            e=mid;
        }  
        mid=s+(e-s)/2;  
    }
    return s;
}

int main(){

    int arr[5]={6,7,1,3,4};
    int ans=getPivot(arr,5);
    cout<<"Pivot Element is at position:"<<ans;


    return 0;
}