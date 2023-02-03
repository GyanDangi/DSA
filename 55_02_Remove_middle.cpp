//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{   private:
        void solve(stack<int>&s,int count, int size){
            
            if(count==size/2){
                s.pop();
                return ;
            }
            
            // Strore krwa liya
            int num=s.top();
            s.pop();
            
            // Reursive call:
            solve(s, count+1, size);
            
            s.push(num);
            
            
        }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {   
        int count=0;
        solve(s,count, sizeOfStack);
    }
};

//{ Driver Code Starts.
int main() {

        int sizeOfStack;
        cout<<"enter the size of stack:"<<endl;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        cout<<"enter the stack element:"<<endl;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            cout<<"after deletion of the middle element:"<<endl;
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;

    return 0;
}
