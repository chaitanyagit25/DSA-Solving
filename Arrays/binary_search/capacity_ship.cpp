#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int daysneeded(vector<int>& nums,int capacity){
        int day = 1;
        int currentload = 0;
        for(int w : nums){
            if(currentload + w > capacity){
                day ++;
                currentload = w;
            }
            else {
                currentload += w;
            }
        }
        return day;
    }
    int shipwithindays(vector<int>& nums,int d){
        int left = *max_element(nums.begin(),nums.end());
        int right = accumulate(nums.begin(),nums.end(),0);
        while(left < right){
            int mid = left +(right-left)/2;
            int needed = daysneeded(nums,mid);
            if(needed<=d){
                right = mid;

            }
            else {
                left = mid-1;
            }
           
        }

     return left;
    }


};
int main(){
    Solution sol;
    vector<int> nums ={5,4,5,2,3,4,5,6};
    int d =5;
    int ans = sol.shipwithindays(nums,d);
    cout<<ans <<"\n";
    return 0;
}