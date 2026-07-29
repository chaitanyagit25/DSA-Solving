#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<vector<int>> generate(int numrows){
        vector<vector<int>> result;
        vector<int> prevrow;
        for(int i =0;i<numrows;i++){
            vector<int> row(i+1);
            row[0]=1,row[row.size()-1]=1;
            
            if(i>=2){
            for(int j = 1;j<row.size()-1;j++){
                row[j]= prevrow[j-1]+prevrow[j];
                
                
            }
        }
        result.push_back(row);
        prevrow = row;

        }
        return result;
    }
};
int main(){
    Solution sol;
    int n =6;
    vector<vector<int>> ans = sol.generate(n);
    for(auto &row : ans){
        for(auto &val : row)cout<<val<<" ";
        cout<<endl;


    }
}