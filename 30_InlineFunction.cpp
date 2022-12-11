#include <iostream>
#include <iomanip>
using namespace std;

inline int getMax(int &a, int &b){
    return (a>b)? a:b;
}
int main() {

    int a,b;
    a=4; b=6;

    int ans=getMax(a,b);
    cout<<ans<<endl;

    a=a+3;
    b=b+2;
    ans=getMax(a,b);
    cout<<ans;

return 0;
}