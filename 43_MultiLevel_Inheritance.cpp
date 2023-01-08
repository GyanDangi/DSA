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

class Dog: public Animal{

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};


class GermanShepher: public Dog{};
int main() {

   GermanShepher g;
   g.speek();
   g.bark();

return 0;
}