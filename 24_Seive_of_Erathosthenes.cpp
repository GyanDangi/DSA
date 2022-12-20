#include <iostream>
#include <vector>
using namespace std;

// int countPrime(int n){

//     int count=0;
//     vector<bool> prime(n+1,true);
//     prime[0]=prime[1]=false;

//     for (int i = 2; i < n; i++)
//     {
//         if(prime[i]){
//             count++;

//             for (int j = 2*i; j < n; j+i)
//             {
//                 prime[j]=0;
//             }
            
//         }
//     }
//     return count;
    
// }

int PrimeCount(int &n){

    int count=0;
    int arr[n]={0};
    arr[0]=arr[1]=false;
    for (int i = 2; i < n; i++)
    {
        if (arr[i]==0)
        {
            count++;
            for (int j = 2*i; j < n; j+=i)
            {
                arr[j]=1;
            }
            
        }
        
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i]==0)
        {
            cout<<i<<" ";;
        }
        
    }
    cout<<endl;

    return count;

    
    
}

int main(){


    // int ans=countPrime(40);
    // cout<<ans;

    int n;
    cout<<"enter the number:";
    cin>>n;

    cout<<PrimeCount(n);
    
    return 0;
}