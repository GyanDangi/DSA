#include <iostream>
#include <iomanip>
using namespace std;

    int sumAns(int n){
        int ans=0;
        for (int i = 1; i <=n; i++)
        {
            ans=ans+i;
        }
        return ans;
    }

    int ArraySum(int *arr, int size){

        int sum=0;
        for (int i = 0; i < size; i++)
        {
            sum=sum+arr[i];
        }
        return sum;
    }
int main() {
int n;
cin>>n;
int arr[4]={1,2,3,5};
// missing element in the array is:4

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;


int mis=sumAns(n)-ArraySum(arr,4);
cout<<"missing element:"<<mis<<endl;
return 0;
}