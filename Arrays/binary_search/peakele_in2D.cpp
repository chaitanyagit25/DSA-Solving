#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> findpeak(vector<vector<int>>& matrix){
        
        int n = matrix.size();
        int m = matrix[0].size();
        int low =0,high = m-1;
        while(low<=high){
            int mid  = (low+high)/2;
            int maxrow = getmaxrow(matrix,mid);
            int left = (mid==0) ? -1 : matrix[maxrow][mid-1];
            int right = (mid ==m-1) ? -1 : matrix[maxrow][mid+1];
            if(matrix[maxrow][mid]> left && matrix[maxrow][mid]>right){
                return {maxrow,mid};
                
            }
            else if(left> matrix[maxrow][mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {-1,-1};



    }
    int getmaxrow(vector<vector<int>>& matrix,int col){
        int maxval = matrix[0][col];
        int maxrow = 0;
        for(int i =0;i<matrix.size();i++){
            if(matrix[i][col]>maxval){
                maxval = matrix[i][col];

                maxrow = i;
            }
            

            
        }
        return maxrow;
    }
};
int main(){
    vector<vector<int>> matrix = {{5,10,8},{4,25,7},{3,9,6}};
    Solution sol;
    vector<int> ans = sol.findpeak(matrix);
    cout<<"[" << ans[0]<< ","<< ans[1]<<"]"<<endl;
    return 0;
}