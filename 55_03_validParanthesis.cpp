#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
       stack<char>c;
       for(int i=0; i<x.length(); i++){
           
           char ch=x[i];
           
           // push krenge:
           if(ch=='('|| ch=='[' || ch=='{'){
               c.push(ch);
           }
           
           // phle top se compare then pop
           else{
               if(!c.empty()){
                   char top=c.top();
                   // closing bracket aa rha hai aur empty hai
                   if((ch==')'&& top=='(')|| (ch=='}'&& top=='{')|| (ch==']'&& top=='[')){
                       c.pop();
                   }
                   else{
                       return false;
                   }
               }
               // empty nahi or closing bracket aa rha hai.
               else{
                   return false;
               }
           }
       }
       // humne pura process kr liya hai stack ko:
       if(c.empty()){
           return true;
       }
       return false;
    }

};


int main()
{

   string a;
        cout<<"enter string of parenthesis:"<<endl;
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
}
