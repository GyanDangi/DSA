#include <iostream>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
// count pair who difference is given to x 
int checkPair(int *arr, int size, int x)
{
    // sort(arr, arr + 5);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (x == arr[j] - arr[i])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{

    int arr[5] = {98, 20, 2, 80, 1};
    sort(arr, arr + 5);
    cout << checkPair(arr, 5, 78);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // cout<<arr<<endl;
    // cout<<&arr[1]<<endl;
    // cout<<&arr[2]<<endl;

    return 0;
}