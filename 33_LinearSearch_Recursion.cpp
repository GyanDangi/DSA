#include <iostream>
#include <iomanip>
using namespace std;

bool LinerSearch(int *arr, int size, int k)
{

    if (size == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        // bool remainingPart = LinerSearch(arr + 1, size - 1, k);
        // return remainingPart;
        return LinerSearch(arr + 1, size - 1, k);
    }
}

int main()
{

    int arr[5] = {1, 2, 4, 3, 2};
    int size = 5;
    int key = 8;
    bool ans = LinerSearch(arr, size, key);

    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    return 0;
}