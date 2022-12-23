#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void Subset(vector<int>nums, vector<int>output, int index, vector<vector<int>>&ans){


    // Base Case:

    if(index>=nums.size()){

        ans.push_back(output);
        return ;
    }

    // exclude:
    Subset(nums, output, index+1, ans);

    // include:
    int element=nums[index];
    output.push_back(element);
    Subset(nums, output, index+1, ans);

    

    
}
 vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        Subset(nums, output, index, ans);
        return ans;
    }
int main() {

    int n;
    cout<<"enter value of n:"<<endl;
    cin>>n;
    cout<<(1<<n)<<endl;
return 0;
}