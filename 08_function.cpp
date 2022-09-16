// call by value
#include <iostream>
using namespace std;
void getNumber(int n){
    // Is function n ki copy ban rha hai.
    n++;
    cout<<"this is "<<n;
    
}


int main(){
// Humne n ki value ko pass kr diya..
// isliye main() me n ki value n hi rhengi.
    int n;
    cout<<"enter the value of the n:";
    cin>>n;
    cout<< "this is main() function n:"<<n<<endl;
    getNumber(n); 


    return 0;
}