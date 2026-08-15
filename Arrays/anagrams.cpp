#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool anagramstr(string str1,string str2){
        if(str1.length() != str2.length()) return false;
        unordered_map<char,int> mp;
        for(int i =0;i<str1.size();i++){
            mp[str1[i]]++;

        }
        for(int i =0;i<str2.size();i++){
            if(mp[str2[i]] == 0) return false;
            mp[str2[i]]--;

        }
        return true;
        

    }
};
int main(){
    Solution sol;
    string str1 = "cat";
    string str2 = "tac";
    cout<<(sol.anagramstr(str1,str2) ? "true" : "false")<<endl;
    return 0;
}