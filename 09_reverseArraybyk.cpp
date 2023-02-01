#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

void PrintArray(int *arr, int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " "; 
    }
    cout<<endl;
    
}

void ReversArrayByK(int *arr, int size, int k){

    for (int i = 0; i < size; i+=k) 
    {
       int start=i;
       // This is the main cocept here
       int end=min(i+k-1, size-1);
       while (start<end)
       {
        swap(arr[start], arr[end]);
        start++;
        end--;
       }

       
    }
    
   
}
int main() {
int arr[5]={1,2,3,4,5};
PrintArray(arr, 5);
ReversArrayByK(arr, 5, 3);
PrintArray(arr, 5);
return 0;
}