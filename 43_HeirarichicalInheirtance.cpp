#include <iostream>
#include <iomanip>
using namespace std;

class A{};
class B :public A{
    
    public:
    void func1(){
        cout<<"inside func1" <<endl;
    }
};
class C :public A{
     public:
    void func2(){
        cout<<"inside func2" <<endl;
    }
};

class E :public B{};
class F :public B{};
class G :public B{};

class I :public C{};
class H :public C{};
class J :public C{};
int main() {

    J obj1;
    obj1.func2();
    
return 0;
}