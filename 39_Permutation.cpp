#include <iostream>
#include <iomanip>
#include<vector>
using namespace std;

void solve(vector<int> nums, int index, vector<vector <int>> &ans){
    

    if(index>=nums.size()){
        ans.push_back(nums);
    }

    for (int i = index; i < nums.size(); i++)
    {
        // Processing:
        swap(nums[index],nums[i]);

        // Recursive Call:
        solve(nums, index+1, ans);

        // BackTracking:
        swap(nums[index], nums[i]);
    }
    
}
int main() {

return 0;
}