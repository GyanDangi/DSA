#include <iostream>
#include <iomanip>
using namespace std;

void ReverseString(string &str, int i, int j)
{   
    cout<<"Recursive Calls:"<<str<<endl;

    // Base Case:
    if (i>j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    ReverseString(str, i, j);
    
    
}
int main()
{
    string str;
    cout<<"enter the string:"<<endl;
    cin>>str;
    ReverseString(str,0,str.length()-1);
    cout<<str;
    return 0;
}