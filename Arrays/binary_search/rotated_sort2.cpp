#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool searchele(vector<int>& nums,int k){
        int n = nums.size();
        int low = 0,high = n-1;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[mid]==k)return true;
            if(nums[low] == nums[mid] && nums[mid]==nums[high]){
                low ++;
                high--;
                continue;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low] <= k && k<=nums[mid]){
                    high =mid-1;
                }
                else{
                    low = mid +1;
                }
            }
            else {
                if(nums[mid]<=k && k <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
       return false;

    }
};
int main(){
    Solution sol;
    int k = 5;
    vector<int> nums ={7,8,1,2,3,3,3,4,5,6};
    bool ans =sol.searchele(nums,k);
    if(ans){
        cout<<"target  present\n";
    }
    else{
        cout<<"not present\n";
    }
    return 0;
}