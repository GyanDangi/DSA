#include <iostream>
#include <iomanip>
using namespace std;


// Brute Force Approach:

int inversionCount(int *arr, int n){

    int inv1=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                inv1++;
            }
            
        }
        
    }
    return inv1;
    
    
}

int merge(int *arr, int s, int e)
{
    int inv=0;
    int mid = s + (e - s) / 2;
    // Length Of first Array.
    int len1 = mid - s + 1;
    // Length of second array.
    int len2 = e - mid;

    // dynamic Array creation:
    int *firstArray = new int[len1];

    // dynamic Array creation:
    int *secondArray = new int[len2];

    // copying element in Arrays.
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {

        firstArray[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {

        secondArray[i] = arr[mainArrayIndex++];
    }

    // Merge Array:
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    
    while (index1<len1 && index2<len2)
    {
        if (firstArray[index1]<secondArray[index2])
        {
            arr[mainArrayIndex++]=firstArray[index1++];
        }
        else
        {
            arr[mainArrayIndex++]=secondArray[index2++];   
            inv +=len1-index1;
        }
        
      
    }
    // remaining elements:
    while (index1<len1)
    {
        arr[mainArrayIndex++]=firstArray[index1++];
    }
    while (index2<len2)
    {
        arr[mainArrayIndex++]=secondArray[index2++];
    }

    // delete []firstArray;
    // delete []secondArray;
    
      return inv;
    
}

int  mergeSort(int *arr, int s, int e)
{
    int inv=0;
    // Base Case:
    if (s >= e)
    {
        return 0;
    }
    int mid = s + (e - s) / 2;

    // Left part ko Sort
   inv += mergeSort(arr, s, mid);

    // Right part ki sort
    inv += mergeSort(arr, mid + 1, e);

    // merge both array.
   inv += merge(arr, s, e);

   return inv;
}
int main()
{
    int arr[5]={10,9,12,4,23};
    int size=5;
   cout<<inversionCount(arr,size);
   cout<<endl;
   cout<< mergeSort(arr,0,size-1);
   cout<<endl;
    // print Array:
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}