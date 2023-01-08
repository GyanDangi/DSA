#include <iostream>
#include <iomanip>
using namespace std;

class Hero
{
public:
    int age;
    static int death;

    static int random()
    {
        // cout<<this->death<<endl; error bcz current object nhi hota hai.
        // cout<<age<<endl; static function can only access static memeber:
        return death;
    }
};

// Initilization of static member:
int Hero ::death = 100;
int main()
{

    // Static member ko access krne ke liye object creation ki need nahi hoti.
    cout << Hero::death << endl;

    cout << Hero::random() << endl;

    /*
    Hero h1;
    // Ye recomended nhi hota hai.
    cout << h1.death << endl;

    Hero h2;
    h2.death = 10;
    cout << h1.death << endl;
    cout << h2.death << endl;

    */
    return 0;
}