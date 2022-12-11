#include <iostream>
using namespace std;
#define PI 3.14
// Can't be changed.
// No extra Storage.

// Object Line Macro Definition:
#define AREA(l,b)(l*b)
#define DATE 31

// Chain Macro Definition:
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 136

// Multi-line Macro definition:
#define ELE 1, \
            2, \
            3

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))            

int main(){

    int r=5;
    double area=PI *r*r;
    cout<<"Area is:"<<area<<endl;

    int l1=10;
    int l2=20;
    int area1=AREA(l1,l2);
    cout<<"Area is:"<<area1<<endl;

    //Different types of Macros:
    // 1-> Object-Like Macros: used as object
    //Example: #define DATE 31
    cout<<"Lockdown Extended till "<<DATE<<"-May-2022"<<endl;

      // 2-> Chain Macro: Created as Chain
    // Example: 
    // #define INSTAGRAM FOLLOWERS
    // #define FOLLOWERS 136
    cout<<"Gyan has "<<INSTAGRAM<<"k followers"<<endl;
    cout<<"Gyan has "<<FOLLOWERS<<"k followers"<<endl;

    // 



     // Array arr[] with elements
    // defined in macros
    int arr[] = { ELE };
 
    // Print elements
    printf("Elements of Array are:\n");
 
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << ' ';
    }
    cout<<endl;


    // Given two number a and b
    int a = 18;
    int b = 76;
 
    cout << "Minimum value between"
         << a << " and " << b
         << " is: " << min(a, b);



    return 0;

  

}