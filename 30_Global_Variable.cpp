#include <iostream>
#include <iomanip>
using namespace std;

int score=90;
// Koi bhi change kr sakta hai..

void a(int n){

    cout<<"Inside a:"<<score<<endl;
}
void b(int n){

    cout<<"Inside b:"<<score<<endl;
    score++;
    // iske baad a ko 91 milega isliye global variable ka use na kre.
}
int main() {
    int n=9;

    cout<<"Inside main:"<<score<<endl;
    b(n);
    a(n);
return 0;
}