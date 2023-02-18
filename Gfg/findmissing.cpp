#include <bits/stdc++.h>
using namespace std;

int findMising(int *arr, int n){
    int sum=0;
    int sum1=0;
    for (int i = 1; i <= n; i++)
    {
        sum1 +=i;
    }
    
    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    int ans=sum1-sum;
    return ans;
}


int main() {

    int arr[2]={0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<< findMising(arr, size);

return 0;
}