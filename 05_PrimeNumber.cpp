#include <iostream>
#include <iomanip>
using namespace std;
// Using Prime Function:

int isPrimeNum(int n){
    
    // Special Case:
    if ((n==1) ||(n==0)){
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    
}
int main() {

        int n;
        cout<<"enter the number:";
        cin>>n;
        bool isPrime=1;
        if((n==0 )|| (n==1)){
            isPrime=0;
        }
        for (int i = 2; i < n; i++)
        {      
             
             if(n%i==0){
                // cout<<"Not Prime Number"<<endl;
                isPrime=0;
            }
        }
        if (isPrime==0)
        {
            cout<<"Not Prime"<<endl;
        }
        else{
            cout<<"Prime Number"<<endl;
        }
        
    cout<<isPrimeNum(n)<<endl;
return 0;
}
