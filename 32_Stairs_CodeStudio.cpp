#include <iostream>
#include <iomanip>
using namespace std;

int CountDistinctWayToClimb(long long  nStairs){

    //  Base Case:
    if (nStairs<0)
    {
            return 0;
    }
    if (nStairs==0)
    {
        return 1;
    }

    int ans=CountDistinctWayToClimb(nStairs-1)+CountDistinctWayToClimb(nStairs-2);
    return ans;
    
    
}
int main() {

int n;
cin>>n;
int ans=CountDistinctWayToClimb(n);
cout<<ans;
return 0;
}