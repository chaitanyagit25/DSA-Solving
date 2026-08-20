#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> distele(vector<int>& nums){
        vector<int> arr1 = {nums[0]};
        vector<int> arr2 = {nums[1]};
        vector<int> result;
        for(int i = 2;i<nums.size();i++){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        result.insert(result.end(),arr1.begin(),arr1.end());
        result.insert(result.end(),arr2.begin(),arr2.end());
        return result;
        
    }
};
int main(){
    Solution sol;
    vector<int> nums={2,1,3};
    vector<int> res = sol.distele(nums);
    for(int p : res){
        cout<<p<<" ";
    }
    return 0;
}