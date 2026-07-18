#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int kadaens(vector<int>& nums){
        int maxi = LONG_MIN;
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            if(sum<0){
                sum = 0;
                maxi = 0;
                

            }
            maxi = max(maxi,sum);


        }
        return maxi;
    }

};
int main (){
    vector<int> nums ={2,3,-7,4,7,-4};
    Solution obj;
    int res = obj.kadaens(nums);
    cout<<"max sum is: "<<res<<endl;
    return 0;
}