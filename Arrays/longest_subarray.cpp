#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int longestSubarray(vector<int>& arr,int k){
        int n = arr.size();
        int maxlen = 0;
        int left =0, right =0;
        int sum = arr[0];
        while(right<n){
            while(left <= right && sum >k){
                sum -= arr[left];
                left ++;
            }
            if(sum ==k){
                maxlen = max(maxlen,right - left +1);

            }
            right ++;
            if(right<n) sum+= arr[right];
            
        }
        return maxlen;

    }
};
int main(){
    vector<int> arr ={10,5,2,7,1,9};
    Solution sol;
    int k = 5;
    int ans =  sol.longestSubarray(arr,k);
    cout<<"length if longest subarray is: "<<ans;
    return 0;


}









































































