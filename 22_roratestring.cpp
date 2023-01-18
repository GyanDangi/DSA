#include <iostream>
#include <iomanip>
using namespace std;
// Rotate String by 2: clock wise and anti clock wise:
void rotateString(string &s){

    string temp="";
    for (int i = 0; i < s.length(); i++)
    {   
        // Clock wise Roation: Rotate by left
        temp[i]=s[(i+2)%s.length()];
        
        // anti clock wise:Rotate by right
        temp[(i+2)%s.length()]=s[i];
    }

    // copying string element:
    for (int i = 0; i < s.length(); i++)
    {
        s[i]=temp[i];
    }
    
    
}
int main() {

    string str="amazon";
    rotateString(str);
    cout<<str;


return 0;
}