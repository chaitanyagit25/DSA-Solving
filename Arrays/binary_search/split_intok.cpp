#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int splitintok(vector<int>& nums,int k){
        int low = *max_element(nums.begin(),nums.end());
        int high = 0;
        for(int i =0;i<nums.size();i++){
            high += nums[i];
        }
        int ans = high;
        while(low<=high){
            int mid = (low+high)/2;
            int subarray = countsubarr(nums,mid);
            if(subarray<=k){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }
        return ans;



    }
    int countsubarr(vector<int>& nums,int maxsum){
        int subarray = 1;
        int currentsum = 0;
        for(int i =0;i<nums.size();i++){
            if(currentsum + nums[i] <= maxsum){
                currentsum += nums[i];


            }
            else{
                subarray++;
                currentsum = nums[i];
            }
        }
        return subarray;
    }
};
int main (){
    vector<int> nums = {1,2,3,4,5};
    Solution sol;
    cout<<sol.splitintok(nums,3)<<endl;
    return 0;
}