#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       
       // finding the largert element in the array:
        int largestelement=candies[0];
        int n=candies.size();
           vector<bool> ans(n);
        for(int i=0; i<candies.size(); i++){
            if(largestelement<candies[i]){
                largestelement=candies[i];
            }
        }
        // compararing largest element with candies[i]+extraCandies
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies>=largestelement){
                ans[i]=true;
            }
            else{
                ans[i]=false;
            }
        }
        return ans;
    }
};