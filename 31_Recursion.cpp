#include <iostream>
#include<math.h>
using namespace std;

int Factorial(int n){
    
    // Base Case:
    if(n==0){
        return 1;
    }
    // int chotti=Factorial(n-1);
    // int big=n*chotti;
    // return big;
    return n*Factorial(n-1);
}
// int Power(int n, int b){

//     // Base Case:
//     if(n==0|| b==0){
//         return 1;
//     }
//     return n*pow(n,b-1);

// }

int Power2(int n){

    //Base Case:
    if (n==0)
    {
        return 1;
    }
    int smallerProm=Power2(n-1);
    int biggerProm=2*smallerProm;

    return biggerProm;
    
}

void Count(int n){
    // Base Condition:
    if (n==0)
    {
        return;
    }
    cout<<n<<" ";
    
    // Recursive Relation:
    Count(n-1);
    
}

int main(){

        int n;
        cout<<"enter the value of n:"<<endl;
        cin>>n;
        // int ans=Factorial(n);
        // cout<<ans<<endl;

        // int ans2=Power(0,0);
        // cout<<ans2<<endl;

        // int ans3=Power2(n);
        // cout<<ans3<<endl;

        Count(n);

    return 0;
}