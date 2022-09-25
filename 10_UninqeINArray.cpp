#include <iostream> 
using namespace std;
 void UniqueElement(int arr[], int size){
    int ans=0;
    for(int i=0; i<size ; i++)
    {
        ans=ans^arr[i];
        // here we have used XOR function:
    }
    cout<< ans;
 }
 // Approach 02:Brute force:  sare element ka count save krenge 
 // jiska count 1 honga vo return kr denge..
    


int main(){

    int arr[9]={ 2,3,4, 5,1,2,3,4,5};
    cout<<"the unique element present in the array is:";
    UniqueElement(arr,9);

    return 0;
}