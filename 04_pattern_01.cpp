#include <iostream>
using namespace std;

int main(){

int n;
cout<<"enter the value of the n:";
cin>>n;
int i=1;

// pattern_01
// 1 2 3 
// 1 2 3
// 1 2 3
// while(i<=n){
     
//      int j=1;
//      while(j<=n){
//         cout<<j<<" ";
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

//Pattern_02

// 4 3 2 1 
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// while(i<=n){
     
//      int j=1;
//      while(j<=n){
//         cout<<n-j+1<<" ";
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

// Pattern_03
// 1 2 3 
// 4 5 6
// 7 8 9

// int count=1;
// while(i<=n){
     
//      int j=1;
   
//      while(j<=n){
//         cout<<count<<" ";
//         count++;
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

// Pattern_04
// 1 
// 2 2 
// 3 3 3
// 4 4 4 4

// while(i<=n){
     
//      int j=1;
   
//      while(j<=i){
//         cout<<i<<" ";
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

// Pattern_05
// * 
// * *
// * * *
// * * * *
// * * * * *
// while(i<=n){
     
//      int j=1;
   
//      while(j<=i){
//         cout<<"*"<<" ";
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

// Pattern_06
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21 
// int count =1;
// while(i<=n){
     
//      int j=1;
   
//      while(j<=i){
//         cout<<count<<" ";
//         count=count+1;
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

//  Pattern_07
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// while(i<=n){
     
//      int j=1;
   
//      while(j<=i){
//         cout<<j<<" ";
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

// Pattern_
// 1 
// 2 3
// 3 4 5
// 4 5 6 7
// while(i<=n){
     
//      int j=1;
   
//      while(j<=i){
//         cout<<i+j-1<<" ";
//         j++; //j=j+1;
//      }
//      cout<<endl;

//      i++;
// }

// Pattern_
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
while(i<=n){
     
     int j=1;
   
     while(j<=i){
        cout<<i-j+1<<" ";
        j++; //j=j+1;
     }
     cout<<endl;

     i++;
}
while(i<=n){
     
     int j=1;
   
     while(j<=i){
        cout<<i-j+1<<" ";
        j++; //j=j+1;
     }
     cout<<endl;

     i++;
}












    return 0;
}