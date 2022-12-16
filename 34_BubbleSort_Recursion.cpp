#include <iostream>
#include <iomanip>
using namespace std;

void BubbleSort(int *arr, int n)
{

    // Base Case:
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {

            swap(arr[i], arr[i + 1]);
        }
    }

    BubbleSort(arr, n - 1);
}
using namespace std;
int main()
{

    int arr[5] = {3, 2, 1, 4, 5};
    BubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}