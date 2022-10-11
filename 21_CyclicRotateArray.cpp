// Problem 2:
// In this problem we have to shift in cyclic way by k position

#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<int>v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

void rotateArray(vector<int> nums,int size, int k){

    vector<int> temp(nums.size());
    for(int i=0; i<nums.size(); i++){
        temp[(i+k)%nums.size()]=temp[i];
    }

    //  Copy Element in the new vector to remove overiding.
    nums=temp;
}
void PrintArray(int arr[], int n){

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


}
void rotateArr(int arr[], int size,int k, int temp[]){

    
    for(int i=0; i<size; i++ ){

        arr[(i+k)%size]= arr[i];

    }

    arr= temp;

}

int main(){

    // int arr[4]={ 1,2,3,4};
    // int arr2[4]={0};
    // rotateArr(arr, 4, 2, arr2);
    // PrintArray(arr2,4);
    int n;
    cout<<"enter the size of the vector:";
    cin>>n;
    vector<int> v;
    cout<<"enter the element of the vectors"<<endl;
    for (int i = 0; i < n; i++)
    {   
        int x;
        cin>>x;
        v.push_back(x);
    }
    PrintVector(v);
    rotateArray(v, 5,2);
    PrintVector(v);
    return 0;
}
