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


    //Default Constructor bhi aisa dikhta hai:
    Human(){

        cout<<"Constructor Called"<<endl;
    }

    // Parametrized Constructor: 
    Human(int height){
        cout<<"the address:"<<this<<endl;
        this->height=height;
    }

    // Multiple constructor:

    Human(int height, int weight){
        cout<<"the address:"<<this<<endl;
        this->wieght=weight;
        cout<<"the address:"<<this<<endl;
        this->height=height;
    }

    // Copy Constructor:
    // Pass by reference jaruri hai nahi to infinite loop me chala jayenga:
    Human(Human& temp){
        cout<<"copy Constructor Called"<<endl;
        this->height=temp.height;
        this->wieght=temp.wieght;
    }
     void Print(){

        // cout<<age<<endl;
        cout<<"height:"<<this->height<<endl;
        cout<<"weight:"<<this->wieght<<endl;

    }

};
int main() {


   // Constructor:
   // Object Creation Statically:
   cout<<"Hi"<<endl;
   Human Hari;
   cout<<"Hello"<<endl;
 
 //Parameterized Constructor:
  Human Hari1(19);
   cout<<addressof(Hari)<<endl;

   // Dynamically:
   Human *Gyan=new Human;

   // Static And dynammic dono me call hota hai constructor.
   

   //Parameterized Constructor:
   Human *Gyan2=new Human(12);
    cout<<"Address of Gyan:"<<&Gyan<<endl;

    // MUltiple Constructor:
    Human *Prakash=new Human(10,12);
    cout<<"address:"<<&Prakash<<endl;

    // Copy COnstructor:
    Human Suresh(12,34);
    Suresh.Print();
    // Copy COnstructor:
    Human Ritesh(Suresh);
    Ritesh.Print();
   
return 0;
}