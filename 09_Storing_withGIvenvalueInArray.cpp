# include <iostream>
using namespace std;


int main(){
  cout<<"this is array for storing same value in array";
      int n;
      cout<<"enter the size of the array:";
      cin>>n;
      int val=5;
      int a[n];
      for(int i=0; i<n; i++){  
        a[i]=val;
        cout<<a[i];
      }
    return 0;
}