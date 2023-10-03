class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             cout<<i<<" "<<j<<endl;
        //             count++;
        //         }
        //     }
        // }
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>1){
               int a=it.second;
              int ans=(a)*(a-1)/2;
              count+=ans;
              
               
            }
        }
        return count;
    }
};