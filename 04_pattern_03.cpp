#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the rows:";
    cin >> n;

    //  Pattern:01
    // D
    // C D
    // B C D
    // A B C D
    // int i = 1;
    // while (i <= n)
    // {
    //     char ch = 'A' + n - i;
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // Pattern:02
    //    *
    //   **
    //  ***
    // ****
    int i=1;
    while(i<=n){
        // space print karne ke liye
        int count=1;
        int space=n-i+1;
        while(space--){
            cout<<count;
            count=count+1;
            // space=space-1;
        }
        // star print karne ke liye..
        int j=1;
        while(j<=i-1){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


    // Pattern:03
//  * * * * * 
//  * * * *
//  * * *
//  * *
//  *
    // int i=1;
    // while(i<=n){
    //     // int j=n;
    //     int star=n-i+1;
    //     while(star--){
    //         cout<<"*"<<" ";
    //         // j=j-1;
    //         // star=star-1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    //  }

    // Pattern:04
    //     *****
    //      ****
    //       ***
    //        **
    //         *
    // int i=1;
    // while(i<=n){
    //     // Space print
    //     int space=1;
    //     while(space<=i-1){
    //         cout<<" ";
    //         space=space+1;
    //     }
    //     int star=n-i+1;
    //     while(star--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     i=i+1;
        
    // }
    // for(int i=1; i<=n; i++){
    //         for(int j=1; j<=i-1; j++){
    //             cout<<" ";
    //         }
    //         for( int j=n; j>=i; j--){
    //             cout<<"*";
    //         }
    //         cout<<endl;
        
    // }
        // Pattern:05
        // 12345
        //  1234
        //   123
        //    12
        //     1

    // int i=1;
    // while(i<=n){
    //     int space=1;
    //     while(space<=i){
    //         cout<<" ";
    //         space=space+1;
    //     }
    //     int j=n-i+1; //
    //     int count=1;
    //     while(j--){
    //         cout<<count;
    //         count=count+1;
    //         // j--;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // Pattern:06
        // 11111
        //  2222
        //   333
        //    44
        //     5
    //     int i=1;
    // while(i<=n){
    //     int space=1;
    //     while(space<=i){
    //         cout<<" ";
    //         space=space+1;
    //     }
    //     int j=n-i+1; //
    //     int count=1;
    //     while(j--){
    //         cout<<i;
    //         // j--;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


        // 1 2 3 4 
        //   5 6 7
        //     8 9
        //       10
    // int i=1;
    //  int count=1;
    // while(i<=n){
    //     // space
    //     int space=1;
    //     while(space<=i-1){
    //      cout<<"  ";
    //      space=space+1;
    //     }
    //     int j=n-i+1;
    //     while(j){
    //         cout<<count<<" ";
    //         count=count+1;
    //         j--;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    return 0;
}