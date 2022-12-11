#include <iostream>
#include <iomanip>
using namespace std;
int main() {

int arr[3]={2,6,5};

// Index ke sath khel..
//(&) this is called and operator..
// (*) this is deference operator..
cout<<"The address of array's first element:"<<arr<<endl;
cout<<"The address of array's first element:"<<&arr<<endl;
cout<<"The address of array's first element:"<<&arr[0]<<endl;
cout<<"The address of array's second  element:"<<&arr[1]<<endl;
cout<<"The address of array's first element:"<<&arr[2]<<endl;

// value ke sath khel..

cout<<"value is:"<<*arr<<endl;
cout<<"value is:"<<*arr +1<<endl;
cout<<"value is:"<<(*arr) +1<<endl;
cout<<"value is:"<<*(arr +1)<<endl;

int ary[4]={23,122,41,130};
cout<<"the value is:"<<ary[2]<<endl;
cout<<"the value is:"<<*(ary+2)<<endl;

// Pro tips:
// formulae:  arr[i]=*(arr+i) 
                //OR // both are same..
//            i[arr]=*(i+arr)
int i=3;
cout<<"the value of 3rd index is:"<<i[ary]<<endl;

int temp[10]={0,1,2};
cout<<"the size of array is:"<<sizeof(temp)<<endl;
// cout<<sizeof(temp[0])<<endl;

// difference between pointer and array..
// 1->  SIZEOF()
int *p=&temp[0];
cout<<"the size of pointer is:"<<sizeof(*p)<<endl;
cout<<"the size of pointer is:"<<sizeof(p)<<endl;  //iska bhi 8 size anna chahiye
cout<<"the size of pointer is:"<<sizeof(&p)<<endl; //iska bhi 8 size anna chahiye

cout<<p+1<<endl;
cout<<&p<<endl;
cout<<*temp+2<<endl;

// 2-> Address ka ..
cout<<"address of temp:"<<&temp<<endl;
cout<<"address of pointer:"<<&p<<endl;

// Symbol table difference-> mapping cannot be change..
int arr3[10]={1,2,3};

// Error
//arr=arr+1;

int *ptr3=&arr[0];
ptr3=ptr3+1;
cout<<ptr3<<endl;


// Character Array....With pointer



return 0;
}