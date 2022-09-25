// Find the total occurance of the number/element in the sorted array.
// formula to be in this question is:(lastoccurance - firstoccurance )+1


#include <iostream>
using namespace std;



int firstoccur(int arr[], int size, int key) 
     {
        int ans1=0;
        int s=0; 
        int e=size-1;
        int mid=s+(e-s)/2;
        while (s<=e)
        {
            if (arr[mid]==key)
            {
                ans1=mid;
                e=mid-1;
            }
            else if (key<arr[mid])
            {
                e=mid-1;
            }
            else if (key>arr[mid])
            {
                s=mid+1;
            }
            
            mid=s+(e-s)/2;
            
        }
        return ans1;
     } 
     
int lastoccur(int arr[], int size, int key) 
     {
        int ans2=0;
        int s=0; 
        int e=size-1;
        int mid=s+(e-s)/2;
        while (s<=e)
        {
            if (arr[mid]==key)
            {
                ans2=mid;
                s=mid+1;
            }
            else if (key<arr[mid])
            {
                e=mid-1;
            }
            else if (key>arr[mid])
            {
                s=mid+1;
            }
            
            mid=s+(e-s)/2;
            
        }
        return ans2;
     } 
     
int main(){

    int arr[7]={1,2,2,3,3,3,3};
    int n1=firstoccur(arr,7,3);
    int n2=lastoccur(arr,7,3);
    int total=(n2-n1)+1;
    cout<<"The total occurance of 3 is "<<total;
    return 0;
}