
#include<bits/stdc++.h>
using namespace std;

class Solution 
{   private:
    bool knows(vector<vector<int> >& M,int a, int b, int n){
        if(M[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
    //   Step 1:
        stack<int>s;
        for(int i=0; i<n; i++){
            s.push(i);
        }
        // Step 02: get two element and compare:
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            // create a knows function:
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        
        int ans=s.top();
        // step:03  checking row and column:
        int zeroCount =0;
        for(int i=0; i<n; i++){
            if(M[ans][i]==0){
                zeroCount++;
            }
        }
        if(zeroCount !=n){
            return -1;
        }
        
        int oneCount =0;
        for(int i=0; i<n; i++){
            if(M[i][ans]==1){
                oneCount++;
            }
        }
        if(oneCount!= n-1){
            return -1;
        }
        // return the cadidate:
        return ans;
        
    
    }
};

//{ Driver Code Starts.

int main()
{
   
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;
}
