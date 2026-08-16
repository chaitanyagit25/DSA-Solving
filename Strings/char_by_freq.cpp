#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    string charfreq(string s){
        unordered_map<char,int> mp;
        for(char c : s){
            mp[c]++;
        }
        vector<pair<char,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end() ,[](pair<char,int> a, pair<char,int> b){
            return a.second>b.second;
        });
        string ans;
        for(auto& p : v){
            ans += string(p.second,p.first);
        }
        return ans;
        

    }
};
int main() {
    Solution obj;
    string s = "tree";
    cout<< obj.charfreq(s)<<endl;

    return 0;
}
