#include <iostream>
#include <iomanip>
using namespace std;

void Swap(int &a, int &b){
  int temp=a;
  a=b;
  b=temp;  
}
int main() {

    int n, m;
    cout<<"enter value of n:";
    cin>>n;
    cout<<"enter value of m:";
    cin>>m;
    cout<<"BeforeSwap:"<<"("<<n<<","<<m<<")"<<endl;
    Swap(n,m);
    cout<<"After Swap:"<<"("<<n<<","<<m<<")"<<endl;
return 0;
}