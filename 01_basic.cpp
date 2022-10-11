#include <iostream>
#include <iomanip>
using namespace std;
int main() {

int n;
cin>>n;
int i=1;
int count=1;
while(i<=n){

int cols=0;
    while(cols<i){
        cout<<count<<" ";
        // cols= cols+1;
        count++;
         cols++;
    }
    cout<<endl;
    i++;
}


return 0;
}