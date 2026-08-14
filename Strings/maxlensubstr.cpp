#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int maxlensubstr(string s){
        unordered_map<char,int> freq;
        int left = 0 , maxlen = 0;
        for(int right =0; right<s.size();right++){
            freq[s[right]]++;
            while(freq[s[right]]>2){
                freq[s[left]]--;
                left++;
            }
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};
int main(){
    Solution sol;
    string s = "bcbbbcba";
    cout<< sol.maxlensubstr(s)<<endl;
    return 0;

}