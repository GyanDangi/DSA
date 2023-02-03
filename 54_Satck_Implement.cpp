#include <iostream>
#include <iomanip>
// #include <stack>   STL library for stack
using namespace std;

class Stack{

    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main() {
    Stack st(5);

    st.push(8);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(2);
    st.push(1);
    st.pop();
   cout<< st.peek();
return 0;
}