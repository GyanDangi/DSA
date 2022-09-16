#include <iostream>
using namespace std;

void PrintArray(int arr[], int size){
    cout<<"printing array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing done "<<endl;
    
}

int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    // yadi hum marks[]={}
    // to garbage value print honga

// Array    
int marks[n]={2,4};
PrintArray(marks, n);

// array
int fifth[10]={ 3,4};
PrintArray(fifth, 10);

int fifthsize=sizeof(fifth)/sizeof(int);

cout<<"The size of fifth is "<<fifthsize;
    return 0;
}