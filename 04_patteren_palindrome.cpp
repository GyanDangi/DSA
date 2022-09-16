#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter the no of the rows:";
cin>>n;

// Pattern:01
//     1
//    121
//   12321
//  1234321
// 123454321
// for(int i=1; i<=n; i++){

//     // space
//     for(int j=n-i; j>=1; j--){
//         cout<<" ";
//     }
//     for(int j=1;j<=i; j++){
//     cout<<j;
//     }
//     for(int j=i-1; j>=1; j--){
//         cout<<j;
//     }
//     cout<<endl;
// }

// int i=1;
// while(i<=n){
//     // space:
//     int space=n-i;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     // First part of the triangle:
//     int j=1;
//     while(j<=i){
//         cout<<j;
//         j=j+1;
//     }
//     // Third triangle:
//     // int k=1;
//     // while(k<=i){
//     //     cout<<i-k+1;
//     //     k=k+1;
//     // }
//     // 2nd approach;
//     int start=i;// for even
//     int start=i-1;// for odd
//     while(start){
//         cout<<start;
//         start=start-1;
//     }
//     cout<<endl;
//     i=i+1;
// }

// int i=1;
// while(i<=n){
    
//     int j=n-i+1;
//     while(j){
//         cout<<j;
//         j--;
//     }
//     cout<<endl;
//     i=i+1;
// }
//
//      1234554321
//      1234**4321
//      123****321
//      12******21
//      1********1

for(int i=n; i>=1; i--){

    for(int j=1; j<=i; j++){
        cout<<j;
    }
    for(int j=n-1; j>=i; j--){
        cout<<"*";
    }
    for(int j=n-1; j>=i; j--){
        cout<<"*";
    }
    for(int j=i; j>=1; j--){
        cout<<j;
    }
    cout<<endl;
}


    return 0;
}