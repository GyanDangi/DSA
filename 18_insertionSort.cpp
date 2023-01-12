#include <iostream>
#include <iomanip>
using namespace std;

// using for loop:
void insertionSort(int* arr, int n){

    for (int i = 1; i < n; i++)
    {       
            int j =i-1 ; 
            int temp= arr[i];
        for (;j >=0; j--)
        {
            if(arr[j]>temp){
                // shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
        
    }
}
// using while loop:
void InsertionSort(int *arr, int n){
    int i=1;
    while (i<n)
    {   
        int temp=arr[i];
        int j=i-1;
        while (j>=0)
        {
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        i++;
        arr[j+1]=temp;


        
    }
    
}
int main() {
    int arr[5]={1,4,3,2,5};
    // insertionSort(arr, 5);
    InsertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}