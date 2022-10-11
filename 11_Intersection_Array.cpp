#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> intesection(vector<int> arr, vector<int> arr2)
{

    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < arr2.size(); j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = -2;
                break;
            }
        }
    }
    return ans;
}
vector<int> printVector(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
    cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v={1,2,3,4,5};
    // printVector(v);
    vector<int> v1={1,2,3,4,5,6};

    vector<int> ans= intesection(v, v1);
    printVector(ans);
     

    return 0;
}