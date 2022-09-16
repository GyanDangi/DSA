#include <iostream> 
using namespace std;

void ArrayMax(int arr[], int n){

    // 
    // initially max value minimum hai
    // koi agar isse bada hota hai to usko hum bada bana denge.
    int maxi=INT32_MIN;
    int index=0;
    for(int i=0; i<n; i++){

        maxi=max(maxi,arr[i]);
        index=i;
        // if(arr[i]>maxi){
        //     maxi=arr[i];
        //     index=i;
            
        // }   
    }
    cout<<maxi<<" "<<index;
    return ;
}
int ArrayMin(int arr[], int n){

    // 
    int mini=INT32_MAX;
    for(int i=0; i<n; i++){

        mini=min(mini,arr[i]);

        // if(arr[i]<mini){
        //     mini=arr[i];
        // }
    }
    return mini;
}


int main(){

    int size; 
    cout<<"enter the size of the array:";
    cin>>size;

    cout<<"enter the array elements:";
    // int num[size]; this is not good practice
    int num[100]; // this is good practice
    // Taking input in array;
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    // cout<<"maximum value of array is:"<<ArrayMax(num, size)<<endl;
    // cout<<"minimum value of array is:"<<ArrayMin(num, size)<<endl;
    ArrayMax(num,size);


    return 0;
}