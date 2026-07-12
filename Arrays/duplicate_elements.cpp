#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int removeDuplicate(vector<int>& nums){
        unordered_set<int> seen;
        int index = 0 ;
        for (int num : nums){
            if(seen.find(num)== seen.end(num)){
            seen.insert(num);
            nums[index]=num;
            index++;
        }


        }
        return index;
    }
};
int main(){
    vector<int> nums ={0,0,1,1,1,2,2,3,3,4};
    Solution sol;
    
    int k = sol.removeDuplicate(nums);
    cout<< "k = "<<k<<"\narray after removing duplicates: ";
    
    for(int i =0;i<k;i++){
        cout<<nums[i]<<" ";

    }
    cout<<endl;
}