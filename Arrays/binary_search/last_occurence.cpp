#include<bits/stdc++.h>
using namespace std;
int solve(int n,int key,vector<int>& nums){
    int start = 0;
    int end = n-1;
    int result = -1;
    while(start<=end){
        int mid = start + (end-start) /2;
        if(nums[mid]==key){
            result = mid;
            start = mid +1;        
        }
        else if (key < nums[mid]){
            end = mid -1;
        
        }
        else {
        start = mid +1;
        }
    } 
    return result;
    
}
int main(){
    int n =7;
    int key = 13;
    vector<int> nums = {3,4,13,13,13,20,40};
    cout<< solve(n,key,nums) <<"\n";
    return 0;

}