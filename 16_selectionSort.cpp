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

        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {

                minIndex = j;
            }
        }
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