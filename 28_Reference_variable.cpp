#include <iostream>
using namespace std;


void update(int n){

    n++;
}

void update2(int &n){
    n++;
}

/*
// THis is bad Practice::
int& func(int a){
    int num=a;
    int&ans=num;// Local Varialble.
    return ans;
}
*/

int main(){

    int i=5;
    int &j=i;
    cout<<"Before:"<<i<<endl;
    i++;
    cout<<"After:"<<i<<endl;
    j++;
    cout<<"J increment:"<<j<<endl;
    int n=9;
    // cout<<"Before:"<<n<<endl;
    // update(n);
    // cout<<"After:"<<n<<endl;
    cout<<"Before:"<<n<<endl;
    update2(n);
    cout<<"After:"<<n<<endl;

    char ch='a';
    cout<<sizeof(ch)<<endl;
    char *c=&ch;
    cout<<sizeof(c)<<endl;

    int *arr= new int[5];
    cout<<sizeof(arr)<<endl;
    // cout<<sizeof(int[5])<<endl;
    return 0;
}