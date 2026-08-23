#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string reversewords(string s){
        vector<string> words;
        string word ;
        for(int i =0 ;i <s.length(); i++){
            if(s[i] != ' '){
                word += s[i];
            }
            else if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }
        if(!word.empty()){
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string result = "";
        for(int i = 0; i< words.size();i++){
            result += words[i];
            if(i<words.size() -1){
                result += " ";
            }
        }
        return result;

    } 

};
int main(){
    Solution sol;
    string s = " amazing coding skills";
    cout<<sol.reversewords(s)<<endl;
    return 0;

}
