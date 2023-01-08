#include <iostream>
#include <iomanip>
using namespace std;

class A{};
// Heirarchical
class B:public A{};
class D{};

// Heirarchical + multiple Inheritance
class C:public A, public D{};
int main() {

return 0;
}