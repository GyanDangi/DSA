#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
void nextSmaller(vector<int> &v){

    int n=v.size();

    int i=0, j=i+1;
    while(i<n-1){

        if(v[j]<v[i]){
            v[i]=v[j];
        }
        else{
            v[i]=-1;
        }
        i++;
        j++;
    }
    // last index ke liye: j=n-1 kyo use ke aage to koi element rahege nhi isislie ye
    v[j-1]=-1;

    

}
int main() {

    vector<int> v={4,3,4,5,2,3};
    nextSmaller(v);
    printVector(v);



return 0;
}