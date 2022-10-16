#include <iostream> 
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> targetIndex(vector<int> v, int target){

    vector <int > temp;
    for (int i = 0; i < v.size()-1; i++)
    {       
        for (int j = i+1; j < v.size(); j++)
        {
            if((v[i]+v[j])==target){
                temp.push_back(i);
                temp.push_back(j);
                break;
            }
        }
        
    }
    return temp;
    
}
vector<int> printVector(vector<int>v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    // int arr[4]={2,3,5,4};
    int n;
    cout<<"enter the size of the vector:"<<endl;
    cin>>n;

    vector<int> v;
    cout<<"enter the vectors elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"enter target sum:"<<endl;
    cin>>target;
    vector<int> ans= targetIndex(v, target);
    printVector(ans);
    
    return 0;
}