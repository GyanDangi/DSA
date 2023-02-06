// LeetCode:84
#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
// this is for storing next smaller indexes:
vector<int> nextSmaller(vector<int>& arr, int n){
    n=arr.size();
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for(int i=n-1; i>=0; i--){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        // storing next smaller index
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

// This is for storing previous smaller indexes:
vector<int> prevSmaller(vector<int>& arr, int n){
   n=arr.size();
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for(int i=0; i<n; i++){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next(n);
        next=nextSmaller(heights, n);

        vector<int>prev(n);
        prev=prevSmaller(heights, n);
        int area=INT_MIN;
        for(int i=0; i<n; i++){
            int l=heights[i];

            // when  we reach to the last index of array:
            // when size are equal
            if(next[i]==-1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;

            int newArea=l*b;
            area=max(area,newArea);
        }
        return area;
    }
};

int main(){

    Solution obj;
    vector<int> v={2,1,5,6,2,3};
    cout<< obj.largestRectangleArea(v);
}