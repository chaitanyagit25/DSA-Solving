#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> nextper(vector<int>& nums){
        int n = nums.size();
        int ind = -1;
        for(int i = n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
            ind = i;
            break;
            }
        }
        if(ind == -1){
            reverse(nums.begin(),nums.end());
            return nums;
        }
        for(int i = n-1;i>ind ;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        
        int left = ind+1,right = n-1;
        while(left<right){
             swap(nums[left],nums[right]);
             left++;
             right--;
        }
        return nums;
    }

};
int main(){
    vector<int> nums ={1,2,3};
    Solution sol;
    vector<int> ans = sol.nextper(nums);
    for(int x : ans){
        cout<<x<<" ";

    }
    cout<<"\n";
    return 0;
}