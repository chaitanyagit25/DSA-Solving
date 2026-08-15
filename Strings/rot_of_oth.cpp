#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool rotofot(string& s,string& goal){
        if(s.length() != goal.length()) return false;
        string doubleds = s+s;
        return doubleds.find(goal) != string::npos;
    }
};
int main(){
    Solution sol;
    string s = "rotation";
    string goal = "tionrota";
    cout<< (sol.rotofot(s,goal) ? "true" : "false") <<endl;
    return 0;
}