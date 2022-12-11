#include <iostream>
using namespace std;

int getSum(int*arr,int n){
    
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    return sum;
}

int main(){

    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;

    // Variable Size Array:
    int *arr=new int[n]; //dynamic allocation of memory to array.
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int ans=getSum(arr,n);
    cout<<ans<<endl;
    cout<<"Before Deletion:"<<arr[0]<<endl;
    delete []arr;
    cout<<"After Deletion:"<<arr[0]<<endl;
    return 0;
}