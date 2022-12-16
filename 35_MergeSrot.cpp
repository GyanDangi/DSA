#include <iostream>
#include <iomanip>
using namespace std;

void merge(int *arr, int s, int e)
{

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

    delete []firstArray;
    delete []secondArray;
    
    
    
}

void mergeSort(int *arr, int s, int e)
{

    // Base Case:
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    // Left part ko Sort
    mergeSort(arr, s, mid);

    // Right part ki sort
    mergeSort(arr, mid + 1, e);

    // merge both array.
    merge(arr, s, e);
}
int main()
{
    int arr[12]={3,2,1,5,2,5,78,43,34,89,90,67};
    int size=12;
    mergeSort(arr,0,size-1);
    // print Array:
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}