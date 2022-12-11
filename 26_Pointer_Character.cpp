#include <iostream>
using namespace std;


int main(){

    int arr[6]={0,1,2,3,4,5};
    char ch[6]="abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    int *ptr=&arr[0];
    cout<<"Integer:"<<ptr<<endl; // Address of 1t Index of Array.

    char *c=&ch[0];
    cout<<"Character:"<<c<<endl; // Print entire string..

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;

    return  0;
}