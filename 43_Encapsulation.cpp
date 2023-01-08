#include <iostream>
#include <iomanip>
using namespace std;

class Student{

private:
string name;
int age;
int heigth;

public:
int getAge(){
    return this->age;
}

};


int main() {
 Student s1;
 cout<<s1.getAge();
return 0;
}