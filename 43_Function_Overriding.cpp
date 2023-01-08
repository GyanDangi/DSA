// this is rum time polymorphism
// this is depends on inheritance
// this is also depends on function arguments.


#include <iostream>
#include <iomanip>
using namespace std;

class Animal{
    public:
    void speek(){
        cout<<"Animal Speeking"<<endl;
    }
};
class Dog: public Animal{
    public:
    void speek(){
        cout<<"Dog is barking"<<endl;
    }
};
int main() {

    Dog g;
    g.speek();
return 0;
}