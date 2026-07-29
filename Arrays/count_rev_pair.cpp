#include<bits/stdc++.h>
using namespace std;

    int revpai(vector<int>& nums,int n){
        int cnt =0;
        
        for(int i =0;i<nums.size()-1;i++){
            for(int j = i+1;j<nums.size()-1;j++){
                if(nums[i]>2*nums[j]){
                    cnt++;

                }
            }
            
        }
       return cnt; 
    }
int team(vector<int>& skill,int n){
    return revpai(skill,n);

}
int main(){
    vector<int> nums ={4,1,2,3,1};
    int n = 5;
    int cnt = team(nums,n);
    cout<<cnt<<endl;
    return 0;
}