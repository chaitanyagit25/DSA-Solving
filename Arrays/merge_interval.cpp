#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(auto interval : intervals){
            if(ans.empty() || ans.back()[1]< interval[0]){
                ans.push_back(interval);
            }else{
                ans.back()[1] = max(ans.back()[1],interval[1]);
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = sol.merge(intervals);
    for(auto v : res){
        cout<<"["<<v[0]<<","<< v[1]<<"]";

    }
    return 0;

}
