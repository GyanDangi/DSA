#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main() {

vector<vector<int>> ans;
vector<int> nums={1,2,3};
int n=nums.size();

for (int i = 0; i < 1<<n; i++)
{
    vector<int>output;
    for (int j = 0; j < n; j++)
    {
        if((1<<j)&i){
            output.push_back(nums[j]);
        }
    }
    ans.push_back(output);
    
}
int m=ans.size();
for (int i = 0; i <m ; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<ans[i][j];
    }
    
}



return 0;
}