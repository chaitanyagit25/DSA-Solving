#include <bits/stdc++.h>
using namespace std;
class Solution {
    public: 
    int getsingleelement(vector<int>& arr) {
        int n = arr.size();
        int xorr =0;
        for(int i=0;i<n;i++){
            xorr = xorr^arr[i];
        }
        return xorr;
    } 

};
int main(){
    vector<int> arr={4,1,2,1,2};
    Solution obj;
    int res = obj.getsingleelement(arr);
    cout<<"single element is: "<<res<<endl;
    return 0;
}