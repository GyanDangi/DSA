#include <iostream>
#include <iomanip>
using namespace std;

class Animal{

    public:
    int age;
    int weigth;

    public:
    void speek(){

        cout<<"Speeking"<<endl;
    }
};

class Dog: public Animal{};
int main() {

    Dog d;
   d.speek();

return 0;
}