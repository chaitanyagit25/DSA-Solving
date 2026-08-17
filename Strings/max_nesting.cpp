#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int maxdep(string s){
        int p = 0;
        int ans = 0;
        for(char x : s){
            if(x == '(') p++;
            else if(x == ')') p--;
            ans = max(ans,p);
        }
        return ans;
    }
};
int main(){
    Solution sol;
     string s = "(1+(2*3)+((8)/4))+1";
     int res = sol.maxdep(s);
     cout<<res<<endl;
     return 0;

}