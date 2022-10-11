#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> intesection(vector<int> arr, vector<int> arr2, int n, int m,vector<int> ans)
{

    
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        for (int j = 0; j < m; j++)
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

int main()
{
    int n, m;
    vector<int>v3;
    vector<int> v;
    cout << "enter the size of vector1" << endl;
    cin >> n;
    cout << "eneter vector1 elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        // v[i];
    }
    vector<int> v1;
    cout << "enter the size of vector2" << endl;
    cin >> m;
    cout << "eneter vector2 elements:" << endl;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
        //  v1[i];
    }
    cout << endl;
    vector<int> ans= intesection(v, v1, n, m, v3);
     

    return 0;
}