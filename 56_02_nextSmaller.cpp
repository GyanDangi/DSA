#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int>v){

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

void nextSmaller(vector<int>&arr){

    int n=arr.size();
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for (int i = n-1; i >= 0; i--)
    {
        int curr=arr[i];
        while(!s.empty() && s.top()>=curr){
            s.pop();
        }
        // chota element mil gaya:
        ans[i]=s.top();
        s.push(curr);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i]=ans[i];
    }
    
    
}
int main() {
    vector<int> v={2,1,3,4,5,3,2,1};
    printVector(v);
    nextSmaller(v);
    printVector(v);

return 0;
}