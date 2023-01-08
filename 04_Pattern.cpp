#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {


/*
A B C D E
  A B C D
    A B C
      A B
        A
*/

int n;

cout<<"Enter the number of rows:"<<endl;
cin>>n;
for (int i = 1; i <=n; i++)
{   
   char ch='A';
    for ( int space = 1; space< i; space++)
    {
        cout<<"  ";
    }
    
    for (int j = 0; j <n-i+1; j++)
    {
        cout<<ch<<" ";
        ch++;
    }
    
    cout<<endl;
}






return 0;
}