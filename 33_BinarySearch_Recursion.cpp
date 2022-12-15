#include <iostream>
#include <iomanip>
using namespace std;

void PrintArry(int *arr, int start, int end){
    for (int i = start; i <= end; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    
}

bool BinarySearch(int *arr, int start, int end, int key)
{
    PrintArry(arr,start, end );
    // Base Case:
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;
    cout<<"Value of array mid is:"<<arr[mid]<<endl;

    // Element found:
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        BinarySearch(arr, mid + 1, end, key);
    }
    else
    {
        BinarySearch(arr, start, mid - 1, key);
    }
}

int main()
{
    int arr[7]={1,2,3,4,5,6,8};
    int arr1[11]={2,4,5,7,8,9,22,35,45,78,234};
    int key2=233;
    int key=8;
    // cout<<"Present or Not"<<endl<<BinarySearch(arr,0,6,key);
    cout<<"Present or Not"<<endl<<BinarySearch(arr1,0,10,key2);
    
    return 0;
}