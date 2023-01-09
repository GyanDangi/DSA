#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int duplicateArray(vector<int> &arr){

    int  count=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(i<arr.size()-1 && arr[i]==arr[i+1]){
        
            continue;
        }
            cout<<arr[i];
            cout<<endl;
        arr[count]=arr[i];
        count++;
    }
    return count;
    
}
int main() {
    int n;
    cout<<"enter the size of array:";
    cin>>n;

    vector<int> arr;
    cout<<"enter the array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
cout<<"the size of nonduplicate array:"<<endl;    
cout<<duplicateArray(arr);
return 0;
}