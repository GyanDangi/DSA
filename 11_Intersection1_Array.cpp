#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
 }

void intersection(int arr1[], int arr2[], int n, int m, int arr3[]){

    int i=0; int j=0;
    int k=0;
    while (i<n && j<m)
    {
       if(arr1[i]==arr2[j]){
        arr3[k]=arr1[i];
        k++;
        i++;
        j++;
       }
       else if(arr1[i]<arr2[j]){
        i++;
       }
       else{
        j++;
       }
    }
    
}

int main(){

    int arr1[]={1,2,3,4};
    int arr2[]={2,3,4};
    int arr3[3]={0};

    // int size = sizeof(arr3)/sizeof(arr3[0]);
    
    intersection(arr1, arr2, 4,3,arr3);
    printArray(arr3, 3);


    return 0;
}