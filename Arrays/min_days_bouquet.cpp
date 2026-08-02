#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int mindays(vector<int>& nums,int k,int m){
        int lo = *min_element(nums.begin(),nums.end()), hi = *max_element(nums.begin(),nums.end());
        int ans = -1;
        while(lo<= hi){
            int mid = (lo + hi)/2;
            if(isfeasible(nums,mid,k,m)){
                ans =mid;
                hi = mid-1;


            }
            else{
                lo= mid+1;
            }

        }
        return ans;
    
    }
    bool isfeasible(vector<int>& nums,int mid,int k,int m){
        int cnt =0,bou=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] <= mid){
                cnt++;
                continue;

            }
            else{
                bou  += cnt/k;
                cnt =0;
                
            }
        }
        bou += cnt/k;
        return bou >= m;


    }
};
int main(){
    vector<int> nums ={7, 7, 7, 7, 13, 11, 12, 7};
    int m = 2,k=3;
    Solution sol;
    int res = sol.mindays(nums,k,m);
    cout<<res<<endl;
    return 0;
}