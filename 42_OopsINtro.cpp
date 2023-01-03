#include <iostream>
#include <iomanip>

// 42Human file se liya hai..
// #include "42HUman.cpp"
using namespace std;


class Human{

    // Properties:
    // by default the data memeber are private:
    // within class we can access private data members:
    char Name;
    int age;
    // char gender;
    public:
    //  Anywhere we can access public data members:
    int height;
    int wieght;

    void Print(){

        cout<<age<<endl;

    }

};
int main() {
    // Object Creation of class Human:
    Human Gyan;


    //cout<<Gyan.age<<endl; // THis will throw error/ Private Access kr rahe hai isliye:

     Gyan.height=90;
    cout<<Gyan.height<<endl;
    cout<<sizeof(Gyan)<<endl;
return 0;
}