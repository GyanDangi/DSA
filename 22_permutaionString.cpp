#include <iostream>
#include <iomanip>
using namespace std;
class Solution {
    private: 
    bool checkEqual(int arr1[26],int arr2[26]){
        for(int i=0; i<26; i++){
            if(arr1[i]!=arr2[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        // Base case:
        if(s1.length()>s2.length()){
            return 0;
        }
        // character count array for small string:
        int arr1[26]={0};
        for(int i=0; i<s1.length(); i++){
            int index= s1[i]-'a';
            arr1[index]++;
        }

        // Windowsize bana ke traverse in large string:
        int i=0;
        int windowSize=s1.length();
        int arr2[26]={0};

        // runnig for first window:
        while(i<windowSize ){
            int index=s2[i]-'a';
            arr2[index]++;
            i++;
        }

        if (checkEqual(arr1,arr2)){
            return 1;
        }

        // Aage ki window ko process krte hai:
        while(i<s2.length()){
            char newChar= s2[i];
            int index= newChar-'a';
            arr2[index]++;

            // old character ko bahar nikal rahe hai:
            char oldChar= s2[i-windowSize];
            index= oldChar-'a';
            arr2[index]--;
            i++;
            if (checkEqual(arr1,arr2)){
            return 1;
        }
        }

      return 0;
    }
};
int main() {
    Solution sol;
    string s1="ab";
    string s2="eidbaooo";
    cout<<sol.checkInclusion(s1,s2);
return 0;
}