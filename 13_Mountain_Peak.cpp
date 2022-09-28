// Code Studio Problem:

#include <iostream>
using namespace std;

int PeakMountain(int arr[], int size){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<e){
        if (arr[mid]<arr[mid+1])
        {
            s=mid+1;
            // ans =s;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
        
    }
    return s;
}


int main(){

    int arr[4]={1,2,3,0};
    int ans=PeakMountain(arr,4);
    cout<<ans;


    return 0;
}