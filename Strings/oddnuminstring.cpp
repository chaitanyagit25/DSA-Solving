#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string largeodd(string& s){
        int ind = -1;
        int i;
        for(i = s.size()-1;i>=0;i--){
            if((s[i]-'0')%2 ==1){
                ind = i;
                break;
            } 
               }

        i =0;
        while(i<=ind && s[i]=='0') i++;
        return s.substr(i,ind-i+1);

    }
};
int main(){
    Solution sol;
    string num = "504";
    string res = sol.largeodd(num);
    cout<<res<<endl;
    return 0;
}