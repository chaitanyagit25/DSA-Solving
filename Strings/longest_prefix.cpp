#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string longestprefix(vector<string>& str){
        if(str.empty()) return "";
        sort(str.begin(),str.end());
        string first = str[0];
        string last = str[str.size()-1];
        string ans = "";
        int minlength = min(first.size(),last.size());
        for(int i =0;i<minlength;i++){
            if(first[i] != last[i]){
                break;
            }
            else{
                ans += first[i];
            }
        }
        return ans;
    }
};
int main (){
    Solution sol;
    vector<string> str = {"flow","flower","flowing"};
    string res = sol.longestprefix(str);
    cout<<res<<endl;
    return 0;
}