#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int sumbyD(vector<int>& nums,int div){
        int sum = 0;
        for(int num : nums){
            sum += ceil((double)num/div);
        }
        return sum;
    }
    int smallestdiv(vector<int>& nums,int limit){
        if(nums.size()>limit) return -1;
        int low=1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = (low+high)/2;
            if(sumbyD(nums,mid)<=limit){
                high = mid-1;

            }
            else {
                low = mid+1;
            }
        }
        return low;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,2,3,4,5};
    int limit = 8;
    int ans = sol.smallestdiv(nums,limit);
    cout<<ans<<"\n";
    return 0;
}