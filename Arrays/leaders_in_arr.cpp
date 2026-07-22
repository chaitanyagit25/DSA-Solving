#include<bits/stdc++.h>
using namespace std;
class Solution {
    public: 
    vector<int> leadersInArr(vector<int>& nums){
        int n = nums.size();
        int maxSofar = nums[n-1];
        vector<int> leaders;
        if(n==0 ) return {};
        if(n==1) return {nums[0]};
        leaders.push_back(nums[n-1]);
        for(int i = n-2; i>=0;i--){
            if(nums[i]>maxSofar){
                leaders.push_back(nums[i]);
                maxSofar = nums[i];
                

            }
            
        }
        
        
            int left =0,right = leaders.size()-1;
            while(left<right){
            swap(leaders[left],leaders[right]);
            left++;
            right--;
            }
        
        return leaders;
    }
};
int main(){
    vector<int> nums ={1,2,5,3,1,2 };
    Solution obj;
    vector<int> leaders = obj.leadersInArr(nums);
    cout<<"leaders in array: ";
    for(int val : leaders){
        cout<<val<<" ";
    }
    return 0;

}