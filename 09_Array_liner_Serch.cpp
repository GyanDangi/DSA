#include <iostream> 
using namespace std;

bool linearSerach(int arr[], int size, int key){

    for(int i=0; i<size; i++){
            if(arr[i]==key){
                return 1;
                //1 is for true
            }
    }
    return 0;
}


int main(){
    cout<<"array we have:"<<endl;
    int num[10]={-2, 3,5,12,-98, 13, 776, 1982,34,54};
    for(int i=0; i<10; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter the element you want to serach:";
    cin>>key;
    int found=linearSerach(num, 10,key );
    if(found){
        cout<<"present in the array:";
    }
    else{
        cout<<"not present in the array:";
    }



    return 0;
}