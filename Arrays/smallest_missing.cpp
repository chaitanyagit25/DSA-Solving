#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int smallestmiss(vector<int>& nums){
        int sum = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum += nums[i];

            }
            else{
                break;
            }
        }
        unordered_set<int> st(nums.begin(),nums.end());
        while(st.find(sum) != st.end()){
            sum++;
        }
        return sum;


    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,2,3,2,5};
    cout<<sol.smallestmiss(nums)<<endl;
    return 0;

}