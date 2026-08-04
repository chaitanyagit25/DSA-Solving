#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int missingnum(vector<int>& nums,int n,int k){
        int low=0,high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            int missing = nums[mid] - (mid+1);
            if(missing < k){
                low = mid+1;
            }
            else{
                high = mid-1;            }
        }
        return k+high+1;
    }
};
int main(){
    
    vector<int> nums = {4,7,9,10};
    int n = nums.size();
    int k = 4;
    Solution sol;
    int ans = sol.missingnum(nums,n,k);
    cout<<ans<<"\n";
    return 0;
}