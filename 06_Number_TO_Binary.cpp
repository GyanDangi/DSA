#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// Example: 5->101, 2->10 Number to Binary:

int toBinanry(int n){

    int ans=0;
    int  i=0;
    while (n!=0)
    {
       int bit=n&1;
       ans=(bit*pow(10,i))+ans;
       n= n>>1;
       i++; 
    }
    return ans;
}
int main() {

int n;
cout<<"enter the number:";
cin>>n;
cout<<toBinanry(n);
return 0;
}