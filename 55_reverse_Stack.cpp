#include <iostream>
#include <iomanip>
#include <stack>
using namespace std;

void reverseString(string &str){

    int s=0;
    int e=str.length()-1;

    while (s<=e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }
    
}
int main() {
    string str="Gyan";
    stack <char>ch;

    for (int i = 0; i < str.length(); i++)
    {
        char c=str[i];
        ch.push(c);
    }
    string ans="";
    while (!ch.empty())
    {
        char c=ch.top();
        ans.push_back(c);
        ch.pop();
    }
    cout<<"After popping all elements from the stack:"<<ans<<endl;
    cout<<"Reversing using standard apporach:"<<endl;
    reverseString(ans);
    cout<<ans;
    return 0;
    
}