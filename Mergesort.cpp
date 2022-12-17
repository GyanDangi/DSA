#include <iostream>
#include <iomanip>
using namespace std;

long long merge(int *arr, int s, int e)
{
    long long inv=0;
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Array Creation:
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int k = s;

    // copy element of original array in Half arrays
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }
    k=mid+1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }

    // Merge arrays:
    int i = 0;
    int j = 0;
    k = s;

    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
             inv+=len1-i;
        }
    }

    // Remaining elements
    while (i < len1)
    {
        arr[k++] = arr1[i++];
    }
    while (j < len2)
    {
        arr[k++] = arr2[j++];
       
    }

    return inv;
}

long long mergeSort(int *arr, int s, int e){

    // Base Case:
    long long inv=0;
    if (s>=e)
    {
        return -1;
    }
    
    int mid=s+(e-s)/2;

    // left array
   inv+= mergeSort(arr, s, mid);

    // right part
   inv+= mergeSort(arr, mid+1, e);

    // merge
   inv+= merge(arr, s, e);

   return inv;

}
int main()
{
    int arr[5]={3,1,2,3,4};
    int n=5;
//    int ans= mergeSort(arr, 0, n-1);
   cout<<mergeSort<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";  
    }cout<<endl;
    
    return 0;
}