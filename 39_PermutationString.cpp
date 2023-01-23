//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{   private:
    void solve(string s, vector<string>&ans, int index){
        
        if(index>=s.length()){
            ans.push_back(s);
        }
        
        // 
        for(int i=index; i<s.length(); i++){
            
            swap(s[index], s[i]);
            
            solve(s, ans , index+1);
            
            swap(s[index], s[i]);
        }
    }
	public:
		vector<string>find_permutation(string &S)
		{
		    int index=0;
		    vector<string> ans;
		    solve(S, ans, index);
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){

	    string S;
        cout<<"enter string:";
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";

	return 0;
}

