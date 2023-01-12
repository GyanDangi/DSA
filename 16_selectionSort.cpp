#include <iostream>
using namespace std;

// sabse chote element ko useke sahi jagah pr rahkhna hai..

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        // Minimum index store krwa liya hai..
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            // Agar koi element minIndex se chota hai matlab sahi jagagh pr minimum index  nhi hai..
            // usko sahi jagah pr daal do 
            if (arr[j] < arr[minIndex])
            {
                // j index chota tha isliye usko minimum index bana diya
                minIndex = j;
            }
        }
        // ab loop se bahar ane ke baad minIndex wale ko ith se swap kr do.
        swap(arr[minIndex],arr[i]);
    }
}

int main()
{   
    int arr[5]={3,4,5,1,2};
    cout<<"before selection sort:"<<endl;
    printArray(arr,5);
    selectionSort(arr, 5);
    cout<<"after selection sort:"<<endl;
    printArray(arr,5);
    return 0;
}