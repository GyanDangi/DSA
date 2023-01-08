#include <iostream>
#include <iomanip>
using namespace std;
class A{

    public:
    void func(){
        cout<<"Function of A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"Function of B"<<endl;
    }
};


class C: public A, public B{};
int main() {


    C obj;
    // obj.func(); error denga isliye scope resolution operator ka use krna padenga

    obj.A::func();
    obj.B::func();
return 0;
}