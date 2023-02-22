//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int>m;
        for(int i=0; i<n; i++){
            m[a[i]]++;
            if(m[a[i]]>=k){
                return a[i];
            }
        }
        return -1;
    }
};


int main() {

	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	return 0;
}