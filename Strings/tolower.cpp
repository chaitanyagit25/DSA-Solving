#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string tolowercase(string s){
        string ans = "";
        for(char c : s){
            ans += tolower(c);
        }
        return ans;
    }
};
int main(){
    string s = "HELLO";
    Solution sol;
    cout<<sol.tolowercase(s)<<endl;
    return 0;
}