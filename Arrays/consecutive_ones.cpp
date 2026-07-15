#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int maxconse(vector<int>& arr){
        int cnt =0;
        int maxi =0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                cnt++;
                
            }
            else{
                cnt =0;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};
int main(){
    vector<int> arr ={1,1,0,1,1,1};
    Solution obj;
    int res = obj.maxconse(arr);
    cout<<"max conse 1's are: "<<res;
    return 0;
}