#include <iostream>
using namespace std;

int main()
{
    //(&) this is called and operator..
    // (*) this is deference operator..

    
    // int i=5;
    // int *ptr=&i;
    // cout<<"the value of i is:"<<i<<endl;
    // cout<<"the address of the i is:"<<&i<<endl;
    // // sirf ptr likenge to address hi denga..
    // cout<<ptr<<endl;
    // // value ke liye *ptr likhna padenga..
    // cout<<"value of i using pointer is "<<*ptr<<endl;

    // copying value of i to a:
    // int a=i;
    // a++;
    // cout<<"the value of a is:"<<a<<endl;
    // // i ki value change nhi hongi..
    // cout<<"the value of i is:"<<i<<endl;

    // NUll pointer creation:
    int  *ptr=0;
    // (*ptr)++;
    cout<<*ptr<<endl;

    // // copying  using pointer..??
    // int num = 4;
    // int *ptr1 = &num;
    // cout << "before:" << num << endl;
    // // output:4
    // (*ptr1)++;
    // // output:5
    // // pointer me copy nhi banta hai ..
    // // direct address pr ki value ko change kr deta hai..
    // cout << "after:" << num << endl;

    // // Important concept:
    // int n = 6;
    // int *t = &n;
    // cout << "value of n is:" << n << endl;
    // cout << " value of *t is:" << *t << endl;
    // // (*t)++;  // (*t)=(*t)+1 both are same..
    // //    (*t)= (*t)+1;
    // cout << "value of t before increment of t is:" << t << endl;
    // t = t + 1;

    // cout << "value of t after increment of t is:" << t << endl; // 4 address aage chala janege..
    // cout << " value of *t after increment of tis:" << *t << endl; // value change ho rha hai pr pata nhi kyo??
    // cout << "value of n is:" << n << endl;

    // // copying into pointer:
    // int m=9;
    // int *a=&m;
    // int*b=a;
    // cout<<"The value of a pointer is:"<<*a<<endl;
    // cout<<"The value of b pointer is:"<<*b<<endl;
    // // pointer me copy krene ke baad value permanent change hongi agar change 
    // // kerege to....
    // // dusre pointer ki bhi value change ho jayengi..
    // (*b)++;
    // cout<<" value of m pointer is:"<<m<<endl;
    // cout<<"the value of a pointer after increment is:"<<*a<<endl;

    return 0;
}