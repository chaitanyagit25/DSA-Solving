#include<bits/stdc++.h>
using namespace std;
int findmissing(vector<int>& arr){
    int n= arr.size()+1;
    int sum = 0;
    for(int i =0;i<n-1;i++){
        sum += arr[i];
    }
    long long expsum = (n *1LL* (n+1)) / 2;
    return expsum-sum;
}
int main(){
    vector<int> arr={8,2,4,5,3,7,1};
    int res = findmissing(arr);
    cout<<res<<endl;
    return 0;
}