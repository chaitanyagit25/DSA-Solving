#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> majele(vector<int>& nums){
        int n = nums.size();
        int cnt1=0,cnt2=0;
        int el1 =INT_MIN, el2 =INT_MIN;
        for(int i =0;i<n;i++){
            if(cnt1 == 0  && el2 != nums[i]){
                cnt1++;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && el1 != nums[i]){
                cnt2++;
                el2 =nums[i];
            }
            else if(nums[i]==el1) cnt1++;
            else if( nums[i]==el2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
            
        }
        cnt1=0,cnt2 =0;
        for(int i =0;i<n;i++){
            if(nums[i] == el1){
                cnt1++;
            }
            if(nums[i]== el2){
                cnt2++;
            }
        }
        int mini = n/3 +1;
        vector<int> res;
        if(cnt1>=mini){
            res.push_back(el1);
        }

        if(cnt2>=mini && el1 != el2){
            res.push_back(el2);
        }
        return res;
        
    }
};
int main(){
    vector<int> nums ={11,33,33,11,33,11};
    Solution sol;
    vector<int> ans = sol.majele(nums);
    cout<<"the maj ele: ";
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<"\n";
    return 0;
}