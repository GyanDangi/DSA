#include <iostream>
#include <iomanip>
using namespace std;

void SayDigit(int n, string *arr){

    //Base Case:
    if (n==0)
    {
        return ;    
    }

     

    // processing:
    int digit=n%10;
    n /=10; 

    // recursive Call
    SayDigit(n, arr);

    cout<<arr[digit]<<" ";

   

    
}
int main() {

string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int n;
cout<<"enter the number:"<<endl;
cin>>n;
SayDigit(n,arr);

return 0;
}