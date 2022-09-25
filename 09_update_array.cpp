#include <iostream> 
using namespace std;

 void upadteArray(int arr[], int size){

    cout<<"inside the update function"<<endl;

    // printing array
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"Going the main function"<<endl;
 }

int main(){
    
    int num[3]={1,4,5};
    upadteArray(num,3);

    for(int i=0; i<3; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;
}