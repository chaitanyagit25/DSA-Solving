#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int longestsub(vector<int>& nums,int k){
    
        unordered_map<int,int> mp;
        int left = 0;
        int ans =0;
        for(int right = 0;right<nums.size();right++){
            mp[nums[right]]++;
            while ( mp[nums[right]]>k){
                mp[nums[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);

        }
        return ans;


    }
};
int main(){
    vector<int> nums = {1,2,3,1,2,3,1,2};
    Solution sol;
    int res = sol.longestsub(nums,2);
    cout<<res<<endl;
    return 0;
}