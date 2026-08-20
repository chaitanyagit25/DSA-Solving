#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> concatenate(vector<int>& nums){
        vector<int> ans = nums ;
        for(int x : nums){
            ans.push_back(x);
        }
        return ans;

    }
};
int main(){
    vector<int> nums = {1,2,1};
    Solution sol;
    vector<int> res = sol.concatenate(nums);
    for(int p : res){
        cout<<p<<" ";

    }
    return 0;
}