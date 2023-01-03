#include <iostream>
#include <iomanip>

// 42Human file se liya hai..
// #include "42HUman.cpp"
using namespace std;


class Human{

    // Properties:
    // by default the data memeber are private:
    // within class we can access private data members:
    string Name;
    int age;
    // char gender;
    public:
    //  Anywhere we can access public data members:
    int height;
    int wieght;

   
    // Getter and setter: to access private data memebers outside of class:

    // Setter:
    void setName(string s){
        Name=s;
    }

    string getName(){
        return Name;
    }

   
     void Print(){

        // cout<<age<<endl;
        cout<<"height:"<<this->height<<endl;
        cout<<"weight:"<<this->wieght<<endl;

    }

};
int main() {

    
    // Object Creation of class Human:

    Human Gyan;


    //cout<<Gyan.age<<endl; // THis will throw error/ Private Access kr rahe hai isliye:

    //  Gyan.height=90;
    // cout<<Gyan.height<<endl;
    // cout<<sizeof(Gyan)<<endl;


    // Getter and  Setter:
    Gyan.setName("GyanPrakash");
    cout<<Gyan.getName()<<endl;
    

    // static allocation:
    Human Baba;
    Baba.height=124;
    Baba.setName("Panditji");
   cout<< Baba.getName()<<endl;
    cout<<Baba.height<<endl;

    // Dynamic Allocation:
    Human *Ramesh= new Human;
    Ramesh->height=78;
    Ramesh->setName("RameshHariom");
    cout<<Ramesh->getName()<<endl;

    // Accessing data memebers:
    cout<<Ramesh->height<<endl;
    // Using dereference operator:
    cout<<(*Ramesh).height<<endl;

    

   
return 0;
}