#include <bits/stdc++.h>
using namespace std;
long long concateIntger(long i, long j){
    string s1= to_string(i);
    string s2 = to_string(j);
    string s=s1 +s2;
    return stoi(s);
}

long long findArrayConcatval(int *arr, int n){

    long long ans=0;
    long long s=0;
    long long end=n-1;
    long long mid= s+ (end-s)/2;
    if(n%2==0){
        
        while (s<end)
        {
           ans +=concateIntger(arr[s], arr[end]);
           s++;
           end--;
        }
    }
    else{

        while (s<end)
        {
            ans +=concateIntger(arr[s],arr[end]);
            s++;
            end--;
        }
        ans +=arr[mid];
        
    }
    return ans;
}
int main() {
    int arr[5]={5,14,13,8,12};
    int arr1[4]={7,12,3,18};
    cout<<findArrayConcatval(arr1,4);
return 0;
}