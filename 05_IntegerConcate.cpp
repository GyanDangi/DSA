#include <bits/stdc++.h>
#include<string>
using namespace std;

int intgerConcate(int i, int j){
    string s1=to_string(i);
    string s2=to_string(j);
    string s=s1+s2;
    return stoi(s);
    
}
int main() {
    int a;
    cout<<"enter a:";
    cin>>a;
    int b;
    cout<<"Enter b:";
    cin>>b;
    cout<<intgerConcate(a,b);
return 0;
}