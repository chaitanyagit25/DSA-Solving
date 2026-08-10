#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string removeparen(string s){
        int level =0;
        string res = "";
        for(char ch : s){
            if(ch == '('){
                if(level >0) res += ch;
                level ++;

            }
            else if(ch == ')'){
                level --;
                if(level>0)  res += ch;
            }
        }
        return res;

    }
};
int main(){
    string s = "(()())(())";
    Solution sol;
    string ans = sol.removeparen(s);
    cout<<ans<<endl;
    return 0;

}