#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string reversestr(string& s){
       int i =0,j=s.length()-1;
       while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
       }
       return s;


    }
};
int main(){
    string s = "hello";
    Solution sol;
    cout<<sol.reversestr(s)<<endl;
    return 0;
}