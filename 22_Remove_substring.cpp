#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string removepart(string s, string part){

    // using while loop:
    // while(s.length()!=0 && s.find(part) < s.length()){
    //     cout<<s<<endl;
    //     s.erase(s.find(part), part.length());
    // }
    // using for loop:
    for (int i = s.length(); i >=0; i--)
    {
        if(s.length()!=0 && s.find(part) < s.length()){
            cout<<s<<endl;
            s.erase(s.find(part), part.length());
        }
    }
    
    return s;
}
int main() {

string s= "hhvhvaahvahvhvaavhvaasshvahvaln";
string part="hva";
cout<<removepart(s,part);
return 0;
}