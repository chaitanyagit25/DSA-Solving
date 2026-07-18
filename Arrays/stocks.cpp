#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int stocks(vector<int>& nums){
       int maxpro =0;
       int minpri = INT_MAX;
       for(int num : nums){
       if(num<minpri){
       minpri = num;
       }
       else {
        maxpro = max(maxpro,num-minpri);
       }
    }
    return maxpro;
}
      
        
};
int main(){
    vector<int> nums= {7,1,5,3,6,4};
    Solution obj;
    int res = obj.stocks(nums);
    cout<<"maximum profit seen is: "<<res<<endl;
    return 0;


}