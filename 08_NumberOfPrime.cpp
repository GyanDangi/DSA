#include <iostream>
#include <iomanip>
using namespace std;

int isPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}

int countPrime(int n){
    int count=0;
    if(n==0 || n==1){
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if(isPrime(i)){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl;
    return count;
    
}
int main() {
int n;
cout<<"enter the number:"<<endl;
cin>>n;
cout<<countPrime(n);
return 0;
}