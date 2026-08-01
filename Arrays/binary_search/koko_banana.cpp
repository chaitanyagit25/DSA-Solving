#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int calculatetotalhr(vector<int>& piles,int speed){
        int totalHr = 0;
        for(int bananas : piles){
            totalHr += ceil((double)bananas/speed);
        }
        return totalHr;
    }
    int minspeed(vector<int>& piles,int h){
        int maxpile = *max_element(piles.begin(),piles.end());
        int low =0,high = maxpile;
        int ans = maxpile;
        while(low<=high){
            int mid = (low+high)/2;
            int totalHr = calculatetotalhr(piles,mid);
            if(totalHr<=h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int> piles = {3,6,7,11};
    int h =8;
    cout<< sol.minspeed(piles,h);
    return 0;

}