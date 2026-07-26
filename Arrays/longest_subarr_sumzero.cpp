#include<bits/stdc++.h>
using namespace std;
int maxLen(int a[],int n){
    unordered_map<int,int> mp;
    int sum =0;
    int maxi =0;
    for(int i =0;i<n;i++){
        sum += a[i];
        if(sum == 0){
            maxi = i+1;
        }
        else {
            if(mp.find(sum)!=mp.end()){
                maxi = max(maxi,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }

    }
    return maxi;

}
int main(){
    int a[]={9,-3,3,-1,6,-5};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<maxLen(a,n)<<endl;
    return 0;
}