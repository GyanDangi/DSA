#include <bits/stdc++.h> 
using namespace std;
int findMinimumCost(string str) {
  // Write your code here
  // step:01 odd length of string
  if(str.length()%2==1){
    return -1;
  }
  stack<char> s;
  for(int i=0; i<str.length(); i++){

    char ch=str[i];

    if(ch=='{'){
      s.push(ch);
    }
    else{
      // matlab closing bracket mila
        if(!s.empty() && s.top()=='{'){
          s.pop();
        }
        else{
          s.push(ch);
        }
    }
  }
  // invalid parathesis mil gaya
  int a=0, b=0;
  while(!s.empty()){
    if(s.top()=='{'){
      b++;
    }
    else{
      a++;
    }
    s.pop();
  }
  int ans=(a+1)/2 +(b+1)/2;
  return ans;
}

int main(){

    /*
    sample test cases1:
    {{{}
    {{}{}}
    {}}{}}
    {{{{
    {{{}}
    
    sample test cases2:
    {{{{{}}}
    }{}{}{}}
    {{
    {}}}}{{}
    {}}}{}{{{}
    */

   string str;
   cout<<"enter string :"<<endl;
   cin>>str;

   cout<<findMinimumCost(str);


   return 0;
}