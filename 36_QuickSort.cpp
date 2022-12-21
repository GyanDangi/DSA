#include <iostream>
#include <iomanip>
using namespace std;

int Partition(int *arr, int s, int e){

    int pivot=arr[s];

    int count=0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i]<=pivot)
        {
            count++;
        }
        
    }

    // Right position for Pivot element:
    int pivotIndex=s+count;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part sambhalte hai:

    int i=s; 
    int j=e;
    while (i<pivotIndex && j>pivotIndex)
    {   
        // Agar left part me pivot se chote elements hai to i ko aage bada do.
        while (arr[i]<=pivot)
        {
            i++;
        }
        // Agar right part me pivot se bade elements hai to j ko piche kr do.
        while (arr[j]>pivot)
        {
            j--;
        }

        // Agar do coidition ke alawa kuch aur hai.
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j++]);
        }

        
    }

    return pivotIndex;
    
    
}

void QuickSort(int *arr, int s, int e){

    // base Case:
    if(s>=e){
        return ;
    }
    // partition:
    int p=Partition(arr, s, e);

    // Recursive Call
    // Left part ke liye:Sort

    QuickSort(arr, s, p-1);

    //Right part ke liye: Sort
    QuickSort(arr, p+1, e);
}
int main() {
    int arr[5]={3,4,5,1,2};
    int size=5;
    QuickSort(arr, 0, size-1);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}