#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int singleele(vector<int>& nums){
        int n = nums.size();
        if(n ==1 )return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        int low = 1,high = n-2;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return mid;
            }
            if((mid % 2 ==1 && nums[mid]==nums[mid-1]) || (mid % 2 ==0 && nums[mid]==nums[mid+1])){
                low = mid+1;
            }
            else{
                high = mid-1;
            }

        }
        return -1;

    }
};
int main() {
    // Input array with all elements appearing twice except one
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};

    // Call the function and store the result
    Solution obj;
    
    int ans = obj.singleele(nums);

    // Print the result
    cout << "The single element is: " << ans << "\n";

    return 0;
}