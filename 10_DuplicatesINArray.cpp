#include <iostream>
#include <unordered_map>
using namespace std;

void findDuplicates(int arr[], int size)
{
    unordered_map<int, int> hash;

    for (int i = 0; i < size; i++)
    {
        if (hash.find(arr[i]) == hash.end())
            hash[arr[i]] = 1;
        else
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 2, 4, 6, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicates: ";
    findDuplicates(arr, size);

    return 0;
}
