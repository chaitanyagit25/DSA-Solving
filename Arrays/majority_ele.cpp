#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int majele(vector<int>& nums){
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        for(auto& pair : mp){
            if(pair.second>n/2){
                return pair.first;
            }
        }
        return -1;

          


    }
};
int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution obj;
    int res = obj.majele(nums);
    cout<<"the majority element: "<<res<<endl;
    return 0;

}