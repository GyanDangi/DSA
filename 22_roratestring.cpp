#include <iostream>
#include <iomanip>
using namespace std;
// Rotate String by 2: clock wise and anti clock wise:
string rotateStringToright(string s){

    string temp="";
    for (int i = 0; i < s.length(); i++)
    {   
      
        
        // anti clock wise:Rotate by right
        temp[(i+2)%s.length()]=s[i];
    }

    // copying string element:
    for (int i = 0; i < s.length(); i++)
    {
        s[i]=temp[i];
    }
    return s;
    
}
string rotateStringToleft(string s){

    string temp="";
    for (int i = 0; i < s.length(); i++)
    {   
      
        
        // Clock wise Roation: Rotate by left
        temp[i]=s[(i+2)%s.length()];
    }

    // copying string element:
    for (int i = 0; i < s.length(); i++)
    {
        s[i]=temp[i];
    }
    return s;
    
}
int main() {

    string str="fsbcnuvqhffbsaqxwp";
    cout<<rotateStringToleft(str)<<endl;
    cout<<rotateStringToright(str)<<endl;
    

    string str2="amazon";
     cout<<rotateStringToleft(str2)<<endl;
    cout<<rotateStringToright(str2)<<endl;


return 0;
}