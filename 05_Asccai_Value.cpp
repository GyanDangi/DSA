#include <iostream>
using namespace std;

int main(){
    int a='@';
    cout<<a<<endl;
    int i=1;
    char capitalLetter= 65;// for capital letters
    char smallletter=97;
    cout<<"this is capitalLetters:";
    while (i<=26)
    {
        
        cout<<capitalLetter++<<" ";
        // capitalLetter=capitalLetter+1;
        // i=i+1;
        i++;
    }
    cout<<endl;
    cout<<"this is small letters:";
    int j=1;
    while (j<=26)
    {
        cout<<smallletter<<" ";
        smallletter=smallletter+1;
        j=j+1;
    }
    
    
    // cout<<ch<<endl;
    // return 0;
}