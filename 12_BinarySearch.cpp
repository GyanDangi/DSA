#include <iostream>
using namespace std;

int Binarysearch(int arr[], int size, int key) {

    int start=0;
    int end=size-1;
    int mid= start+ (end-size)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if( key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+ (end-start)/2;
    }
    

}


int main(){

    // user input array:
    // int n;
    // cin>>n;
    // int arr[1000];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // for (int  i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int even[6]={12,22,23,45,67,89};
    int n=Binarysearch(even, 6, 89);
    cout<<"found at index "<<n;


    



    return 0;
}