#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> spiralmat(vector<vector<int>>& nums){
        int top = 0;
        int right = nums.size()-1;
        int bottom = nums.size()-1;
        int left =0;
        vector<int> result;
        while(top<= bottom && left<= right){
            for(int i = left;i<=right;i++){
                result.push_back(nums[top][i]);
            }
            top++;
            for(int i = top ;i<=bottom;i++){
                result.push_back(nums[i][right]);
            }
            right --;
            if(top<=bottom){
                for(int i = right;i>=left;i--){
                    result.push_back(nums[bottom][i]);
                }
                bottom --;
            }
            if(left<=right){
                for(int i = bottom;i>=top;i--){
                    result.push_back(nums[i][left]);

                }
                left++;
            }
        }
        return result;


    }

};
int main(){
    vector<vector<int>> nums ={{1,2,3,},{4,5,6},{7,8,9}};
    Solution sol;
    vector<int> result = sol.spiralmat(nums);
    for(int val : result){
        cout<<val<<" ";
    }
    return 0;
    
}