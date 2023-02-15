#include <bits/stdc++.h>
using namespace std;



bool isPalindrome(string s1, string s2){

    string s3=s1+s2;
    sort(s3.begin(),s3.end());
    stack<char> st;
    for (int i = 0; i < s3.length(); i++)
    {
        char ch=s3[i];

        if(!st.empty() && ch==st.top()){
            st.pop();
        }
        else{
            st.push(ch);
        }
    }
    if(st.size()==0 || st.size()==1){
        return true;
    }
    else{
        return false;
    }
    
}
int main() {

    int t;
    cout<<"enter the number of testcase:"<<endl;
    cin>>t;
    while(t--){

    string s1;
    cout<<"enter string1"<<endl;
    cin>>s1;

    string s2;
    cout<<"enter string2:"<<endl;
    cin>>s2;

    if(isPalindrome(s1,s2)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }



    }

return 0;
}