#include <iostream>
#include <iomanip>
using namespace std;
// THis is compile time polymorphism:
class A{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }
     
    // + Operator overloading:
    void operator+ (A &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<"output:"<<val2-val1<<endl;
    } 

    // () Operator loading
    void operator() (){
        cout<<"I am bracket with "<<this->a<<endl;
    }
};
int main() {

        A obj1, obj2;
        obj1.a=4;
        obj2.a=7;
        obj1+obj2;
        obj1();
return 0;
}