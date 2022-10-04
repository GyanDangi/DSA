#include <iostream>
using namespace std;


// this is brute force method for finding the square root of any number.
// int squareRoot(int n){
    
//     int ans=0;
//     int i=1;
//     while (i*i<=n)           
//     {
//         if(i*i<=n){
//             ans=i;
//         }
//         i++;
//     }
//     return ans;   
// }


long long int sqaureRoot(int n){
    int s=0;
    int e=n;
    int ans=0;
    long long int mid=s+(e-s)/2;
    while (s<=e)
    {
        long long int sqaure=mid*mid;
        if(sqaure==n){

            return mid;    
        }
        else if(sqaure<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
          mid=s+(e-s)/2;

        }
        return ans;
       
      
    }
    
  double morePrecision(int n, int precision, int tempSol){
        double factor=1;
        double ans=tempSol;
        for(int i=0; i<precision; i++){
            factor = factor/10;
            for(double j=ans; j*j<n; j=j+factor){
                    ans=j;
            }
        }
        return ans;
  }  


int main(){
    int n;
    cout<<"enter the value of the n:";
    cin>>n;
    // int ans=squareRoot(n);
    // cout<<ans;

    int tempSol=sqaureRoot(n);
    cout<<"ans is:"<<morePrecision(n,3,tempSol);



    return 0;
}