#include <iostream>
#include <iomanip>
using namespace std;

class Hero{

private:
string name;
 int age;

public: 

 // Setter:
void setName(string s){
    this->name=s;
}

string getName(){
    return name;
}
    // Destructor:
    ~Hero(){
        cout<<"destructor Bhai called"<<endl;
    }
};
int main() {

    // Static allocation: ke liye destructor automatically call hota hai 
    Hero h1;
    h1.setName("Gyan");
    cout<<h1.getName();
    cout<<endl;

    // Dynamic allocation : manually call krna padta hai.
    Hero *h2=new Hero();
    delete h2;

return 0;
}