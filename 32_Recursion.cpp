#include <iostream>
#include <iomanip>
using namespace std;

void reachHome(int src, int dest){


    cout<<"source:"<<src<<" destination:"<<dest<<endl;

    // BAse condition:
    if(src==dest){
        cout<<"You reach to your home."<<endl;
        return ;
    }

    // Processing:
    src++;
    // Recursive Relation:
    reachHome(src, dest);
}

int Fibonnaci(int n){

    // Base Case:
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }

    // ye hame nth term denga..
    return Fibonnaci(n-1)+Fibonnaci(n-2);
    
    
}

int main() {

    int src=1;
    int dest=10;
    reachHome(src, dest);

    int ans=Fibonnaci(8);
    cout<<ans<<endl;

return 0;
}