
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of the rows:";
cin>>n;
int i=1;

// Pattern_01;
// A 
// B C
// D E F
// G H I J
// K L M N O
// P Q R S T U
// char ch=65;
// while(i<=n){
     
//      int j=1;
   
//      while(j<=i){
//         cout<<ch<<" ";
//         ch=ch+1;
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

// Pattern_02
// A A A A 
// B B B B
// C C C C
// D D D D
// while(i<=n){
     
//      int j=1;
//     char ch1='A'+i-1;
//      while(j<=n){
//         cout<<ch1<<" ";
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }


// Pattern
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E




// while(i<=n){
     
//      int j=1;
//     char ch1='A'+i+j-1;
//      while(j<=n){
//         cout<<ch1<<" ";
//         ch1=ch1+1;
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

// Pattern
// A B C D E 
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y

// char ch=65;
// while(i<=n){
     
//      int j=1;
    
//      while(j<=n){
//         cout<<ch<<" ";
//         ch=ch+1;
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }
while(i<=n){
     
     int j=1;
      char ch='A'+i+j-2;
     while(j<=n){
        cout<<ch<<" ";
        ch=ch+1;
        j++; //j=j+1;
     }
     cout<<endl;

     i++;
}




    return 0;

}