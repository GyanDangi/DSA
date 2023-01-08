#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

class Hero{

    public:
    char *name; // 
    int age;


    Hero(){
        cout<<"simple constructor:"<<endl;
        name=new char[100];
    }

    void Print(){
        cout<<"Name:"<<this->name<<endl;
        cout<<"Age:"<<this->age<<endl;
    }

    void setName(char name[]){
         this->name=name;
        //  strcpy(this->name,name);
    }

};
int main() {

Hero h1;
h1.age=13;
char name[5]="Hero";
h1.setName(name);
h1.Print();

//default Copy COnstructor call honga:
Hero h2(h1);
h2.Print();

h1.name[0]='Z';
h1.Print();

h2.Print();

return 0;
}