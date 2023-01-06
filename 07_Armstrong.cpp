#include <iostream>
#include <math.h>
using namespace std;


// Armstrong number is any number following the given rule
// abcd... = a^n + b^n + c^n + d^n + ...
// Where n is the order(length/digits in number)

// Example = 153 (order/length = 3), 407 is another example
// 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

// Example = 1634 (order/length = 4)
// 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634

int length(int n){

    int len=0;
    while(n!=0){

        n /=10;
        // n=n/10;
        len++;
    }
    return len;
}

int armStrongNum(int n, int len){

    int sum=0;
    int temp=n;
    while (temp!=0)
    {
        int digit= temp %10;
        sum=pow(digit,len)+sum;
        temp /=10;
    }

    return n==sum;
    
}

int main(){

    int n;
    cout<<"enter the number:";
    cin>>n;
    int len=length(n);
    if(armStrongNum(n, len)){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong number"<<endl;
    }

   
    

    return 0;
}