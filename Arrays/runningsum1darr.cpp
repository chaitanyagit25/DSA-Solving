#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> runningsum(vector<int>& nums){
        vector<int> ans;
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int> nums ={1,2,3,4};
   vector<int> res = sol.runningsum(nums);
   for(int x : res){
    cout<<x<<" ";
   }
    return 0;
}