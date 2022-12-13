#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;


vector<int> PrintVector(vector<int>v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main() {

// User Input in vector:
int n;
cout<<"enter the size:";
cin>>n;
vector<int> v;
cout<<"enter the elements of the vectors:"<<endl;
for (int i = 0; i < n; i++)
{
    int x; 
    cin>>x;
    v.push_back(x);
}
cout<<"Your desired Vector is:";
PrintVector(v);

return 0;
}