#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int CountBits(int n){

    int count=0;
    while(n!=0){
        
        if((n&1)==1){
            count++;
        }
        n >>=1;
    }
    return count;
}
int main() {

    int n;
    cout<<"enter the binary number:";
    cin>>n;
    cout<<CountBits(n);

return 0;
}