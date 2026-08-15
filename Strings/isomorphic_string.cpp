#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool isomorpicstr(string s,string t){
        if(s.length() != t.length()) return false;
        unordered_map<char,char> mapST,mapTS;
        for(int i =0;i<s.size();i++){
            if(mapST.count(s[i])){
                if(mapST[s[i]] != t[i]){
                    return false;
                }
            }
                else {
                    mapST[s[i]] = t[i];
                }
                
                
            
            if(mapTS.count(t[i])){
                if(mapTS[t[i]] != s[i]){
                    return false;
                }
            }
                else {
                    mapTS[t[i]] = s[i];
                }
                
            
        }
            
        
        return true;

    }
};
int main (){
    Solution sol;
    string s = "foo";
    string t = "bar";
    cout<<sol.isomorpicstr(s,t)<<endl;
    return 0;
}