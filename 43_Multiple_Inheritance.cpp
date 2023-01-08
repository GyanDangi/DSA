#include <iostream>
#include <iomanip>
using namespace std;
class Animal
{

public:
    int age;
    int weigth;

public:
    void Bark()
    {
        cout << "Barking" << endl;
    }
};
class Human
{
public:
    int age;
    int weigth;

public:
    void speek()
    {

        cout << "Speaking" << endl;
    }
};

// Multiple Inheritance:
class Hybrid: public Animal, public Human{};


int main()
{

    Hybrid obj1;
    obj1.speek();
    obj1.Bark();

    return 0;
}