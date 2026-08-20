#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string defangip(string& s){
        string ans = "";
        for(int i =0;i <s.length();i++){
            if(s[i] == '.'){
                ans += "[.]";
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;
    string s = "1.1.1.1";
    cout<<sol.defangip(s)<<endl;
    return 0;
    
}