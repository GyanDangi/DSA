#include <iostream>
#include <iomanip>
using namespace std;

bool CheckPalindrome(string str, int i, int j)
{

    // Base Case:
    // matlab sare case pass ho gaye.
    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return CheckPalindrome(str, i + 1, j - 1);
    }
}

int main()
{

    string str = "abbccdsdfbba";
    bool isPalindrome = CheckPalindrome(str, 0, str.length() - 1);

    if (isPalindrome)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}