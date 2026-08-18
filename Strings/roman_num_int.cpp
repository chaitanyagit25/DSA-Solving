#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int romantoint(string s){
        unordered_map<char,int> value= {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}

        };
        int ans = 0;
        for(int i  = 0; i <s.size() ;i++){
            if(i < s.size()-1) {
                if(value[s[i]] < value[s[i+1]]){
                    ans -= value[s[i]];
                }
                else {
                    ans +=  value[s[i]];
                    
                }
            }
            else {
                ans += value[s[s.size()-1]];
            }

        }
        return ans;
    }
};
int main() {
    Solution sol;
    string s = "MCMXCIV"; 
    int result = sol.romantoint(s);
    
    
    cout << "Integer value: " << result << endl;

    return 0;
}