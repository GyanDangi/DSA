#include <iostream> 
using namespace std;
void printArray(int arr[],int size)
{   
    cout<<"Array print:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void alternateSwap(int arr[], int size){
    cout<<"Swaped ";
    for(int i=0; i<size; i+=2){
        // Aage wala size ka ander hai ki nahi..
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
           

        }
         
    }
}



int main(){
    
    int arr[6]={1,2,3,4,5,6};
    printArray(arr, 6);
    alternateSwap(arr,6);
    printArray(arr, 6);

    int odd[5]={ 4,5,6,7,8};
    printArray(odd, 5);
    alternateSwap(odd,5);
    printArray(odd,5);


    return 0;
}