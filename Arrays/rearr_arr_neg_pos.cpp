#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> negpos(vector<int>& nums){
        vector<int> ans(nums.size());
        int posind = 0,negind =1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]<0){
                  ans[negind]=nums[i];
                  negind += 2;


            }
            else{
               ans[posind] =nums[i];
               posind += 2;
            }
        }
        return ans;
    }

};
int main(){
    vector<int> nums={1,2,-4,-5};
    Solution obj;

    vector<int> res = obj.negpos(nums);
    for(int num : res){
        cout<<num<<" ";
    }
    return 0;
   
}
