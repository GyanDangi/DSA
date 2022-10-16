// Leetcode: 125
// Given a string s, return true if it is a palindrome, or false otherwise.
// Example 1:
// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:
// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:
// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    return ch - 'A' + 'a';
}
bool checkPalindrome(string str)
{

    int s = 0;
    int e = str.length() - 1;
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

bool validPalindrome(string s)
{

    string temp = "";
    // remove faltu space.
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    // to LowerCase:
    for (int i = 0; i < s.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }
    // checkpalindrome
    return checkPalindrome(temp);
}
int main()
{

    char ch[100] = "";
    cout << "enter the word" << endl;
    cin.getline(ch, 100);
    cout << validPalindrome(ch);

    return 0;
}