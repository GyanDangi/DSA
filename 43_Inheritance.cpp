#include <iostream>
#include <iomanip>
using namespace std;

// Parent_class/ Super Class
class Human{

    private:
    // int heigth;

    public:
    int age;
    int heigth;
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    void setWeigth(int w){
        this->weight=w;
    }
};

// Child Class creation:
class Male:public Human{

    public:
    string color;


    public:
    void Sleep(){

        cout<<"sleeping"<<endl;
    }

};

class Female: protected Human{

    public:
    int getHeight(){
        // protected data member can be access by child class.
        // return this->heigth;

        // private krne ke baad child class me bhi access nahi kr sakte hai..
        // return this->heigth;
    }
    

};

class Trans: private Human{

    public:
    int getHeigth(){
        
        return this->heigth;
    }
   
};
int main() {

    Male m1;
    // Mode of Inheritance: Public
    // cout<<m1.age<<endl;
    // cout<<m1.weight<<endl;
    // cout<<m1.heigth<<endl;
    // cout<<m1.color<<endl;

    //Mode of Inheritance:Protected: Protected memeber ko access kr rhe hai.. using getter:
//     Female f;
//    cout<< f.getHeight();
    // cout<<f.height<<endl;   

   // Mode of Inheritance: Private
   Trans t;
   cout<<t.getHeigth()<<endl;
//   cout<< t.heigth <<endl;  error
return 0;
}