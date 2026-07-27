#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int binarysearch(vector<int>& nums,int low,int high,int target){
        if(low>high) return -1;
        int mid = (low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) return binarysearch(nums,mid+1,high,target);
        return binarysearch(nums,low,mid-1,target);
        

    }
    int search(vector<int>& nums,int target){
        return binarysearch(nums,0,nums.size()-1,target);
    }
};
int main(){
    vector<int> nums={3,4,6,7,9,12,16,17};
    int target = 6;
    Solution sol;
    int ind = sol.search(nums,target);
    if(ind == -1)cout<< "target is not present"<<endl;
    else cout<<"target is at index: "<<ind<<endl;
    return 0;
}