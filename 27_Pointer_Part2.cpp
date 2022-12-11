#include <iostream>
using namespace std;


void update(int **p){

    // p=p+1;// No changes.

    // *p=*p+1;  Address changed for ptr: YEs changes honge.

    **p=**p+1; // Value change : YEs Changes Honge..
}

int main(){


    // int i=8;
    // int *ptr=&i;
    // // ptr=&i;

    // int **ptr1=&ptr;

    // //Address of i
    // cout<<ptr<<endl;
    // cout<<&i<<endl;
    //  cout<<*ptr1<<endl;

    // //Address of ptr.
    // cout<<ptr1<<endl;
    // cout<<&ptr<<endl;
   

    // //Address of ptr1.
    // cout<<&ptr1<<endl;
    
    // // Printing value of i.
    // cout<<i<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr1<<endl;

    // cout<<"before:"<<i<<endl;
    // cout<<"before:"<<ptr<<endl;
    // cout<<"before:"<<ptr1<<endl;
    // update(ptr1);
    // cout<<endl;
    // cout<<"After:"<<i<<endl;
    // cout<<"After:"<<ptr<<endl;
    // cout<<"After:"<<ptr1<<endl;


    // MCQ's

    int first=8;
    int second=18;
    int *ptr=&second;
    *ptr=9;
    cout<<first<<" "<<second<<endl;

    return 0;
}