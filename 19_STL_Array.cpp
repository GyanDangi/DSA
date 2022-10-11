#include <iostream>
using namespace std;
// Array Library:
#include <array>

int main(){

    int basicArray[3]={1,2,3};
    array<int ,4> a={1,2,3,4};
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    // STL Array function:
    cout<<"Element at 2nd Index->"<<a.at(2)<<endl;
    cout<<"Empty or Not->"<<a.empty()<<endl;
    // 0 means false.
    // 1 means true.
    cout<<"first element of the array->"<<a.front()<<endl;
    cout<<"last element of the array->"<<a.back()<<endl;
    cout<<"max size of the array->"<<a.max_size()<<endl;


    return 0;
}