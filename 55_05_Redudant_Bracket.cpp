#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int checkRedundancy(string s) {
       stack<char> st;
       for(int i=0; i<s.length(); i++){
           
           char ch=s[i];
           
           if(ch=='(' || ch=='+'|| ch=='-'|| ch=='*'|| ch=='/'){
               st.push(ch);
           }
           else{
               
               if(ch==')'){
                   bool isRedudant=true;
                   while(st.top()!='('){
                       char top=st.top();
                       if(top=='+'|| top=='-'|| top=='*'|| top=='/'){
                          isRedudant=false;
                       }
                       st.pop();
                   }
                   if(isRedudant==true){
                       return true;
                   }
                   st.pop();
               }
           }
       }
       return false;
    }
};


//{ Driver Code Starts.

int main(){
 
        string s; 
        cout<<"enter the expression:"<<endl;
        //(a+(a+b)) samaple input :output:0
        // ((a+b)) this is redudant: output:1
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        cout<<res<<endl;

}
