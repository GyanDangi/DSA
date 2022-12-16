#include <iostream>
#include <iomanip>
using namespace std;

int PowerOfNumber(int a, int b)
{

    // Base Case:
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = PowerOfNumber(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}
int main()
{
    cout << "Enter the value of a and b for (a^b):";
    int n;
    cin >> n;
    int b;
    cin >> b;
    int ans = PowerOfNumber(n, b);
    cout << ans;
    return 0;
}