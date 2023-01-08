#include <iostream>
#include <iomanip>
using namespace std;

// this is compile time polymorphism.

class A
{

public:
    void SayHello()
    {
        cout << "Hariom Prabhuji" << endl;
    }

    void SayHello(string name)
    {
        cout << "Hariom Prabhuji" << endl;
    }

    int SayHello(int n)
    {
        cout << "Function Overloading" << endl;
        return n;
    }
   

     // Default argruments
    int add(int x, int y, int z = 0, int w = 0)
    {
        return x + y + z + w;
    }
};
int main()
{

    A obj;
    obj.SayHello();

    A obj1;
    // Default argument :
    cout << obj1.add(10, 20)<<endl;
    cout << obj1.add(10, 20, 30)<<endl;
    cout << obj1.add(10, 29, 30, 23)<<endl;
    return 0;
}