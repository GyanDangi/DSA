#include <iostream>
using namespace std;

void print(int *p){

    cout<<*p<<endl;
}

void update(int *p){

    // p=p+1;
    // cout<<"inside:"<<p<<endl;

    *p=*p+1;
}

int getSum(/*int arr[]*/ int *arr , int n){
    // dono tarike se likh sakete hai..
    // pointer pass hota ..
    cout<<"size:"<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += i[arr];
    }

    return sum;
}


int main(){

    /*
    int value=5;
    int *p=&value;
    // print(p);

    // Address cannot be updated..
    cout<<"Before:"<<p<<endl;
    update(p);
    cout<<"After:"<<p<<endl;
   

    // value can be updated..
    cout<<"Before:"<<*p<<endl;
    update(p);
    cout<<"After:"<<*p<<endl;
     */

    int arr[6]={1,2,3,4,5,8};
    // last ke 3 block hi beje hai..
    // benefit of passing array as pointer in function..
    cout<<getSum(arr+3,2)<<endl;
    
    return 0;
}