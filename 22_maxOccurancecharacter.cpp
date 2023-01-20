#include <iostream>
#include <string>
using namespace std;

char maxOccuranceCharacter(string s){

    int arr[26]={0};
    int Occurance=0;
    // creating counting array:
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='a' && s[i]<='z' )
        {
            Occurance= s[i]-'a';
        }
        else{
            Occurance = s[i]-'A';
        }
        cout<<arr[Occurance]<<" ";
        arr[Occurance]=arr[Occurance]+1;
        
    }
    cout<<endl;

    // geting maxium occurance of character:
    int maxi=-1; int maxOccuredcharacterIndex=0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi<arr[i]){
            maxi =arr[i];
            maxOccuredcharacterIndex=i;
        }
    }
    return maxOccuredcharacterIndex +'a';
    
    
}


int main(){

    string str;
    cout<<"enter string:"<<endl;
    cin>>str;
    cout<<maxOccuranceCharacter(str)<<endl;

    return 0;
}