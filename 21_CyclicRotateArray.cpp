// LeetCode:189
// Problem 2:
// In this problem we have to shift in cyclic way by k position

#include <iostream>
#include <vector>
using namespace std;


void CyclicRotate(vector<int> nums, int k){

    vector<int> temp(nums.size());
    for(int i=0; i<nums.size(); i++){
        temp[(i+k)%nums.size()]=nums[i];
    }

    //  Copy Element in the new vector to remove overiding.
    for(int i=0; i<nums.size(); i++){
        nums[i]=temp[i];
    }
    // nums=temp;

    // Printing the Vector:
    for(int i=0; i<nums.size(); i++){
        cout<<temp[i]<<" ";
    }
}



int main(){

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
    int k;
    cout<<"enter the value of k:"<<endl;
    cin>>k;
   CyclicRotate(v,k);
    return 0;
}
