#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    void rotatemat(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(int i = 0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

    }

};
int main(){
    vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9}};
    Solution sol;
    sol.rotatemat(matrix);
    for(auto row : matrix){
        for(int val : row){
            cout<<val<< " ";

        }
        cout<<endl;
    }
    return 0;

}