class Solution {
public:
    int recursion(int ind,int target,vector<int>nums,vector<vector<int>>&dp){
        if(target==0)return 1;
        if(ind<0)return 0;
        if(dp[ind][target]!=-1)return dp[ind][target];
        int pick=1;
        if(nums[ind]<=target){
           pick=recursion(ind,target-nums[ind],nums,dp)*nums[ind];
        }
        int notpick=recursion(ind-1,target,nums,dp);
        return dp[ind][target]=max(pick,notpick);

    }
    int integerBreak(int n) {
        vector<int>nums;
        for(int i=1;i<n;i++){
            nums.push_back(i);
        }
        int m=nums.size();
        for(auto it:nums){
            cout<<it;
        }
        vector<vector<int>>dp(m,vector<int>(n+1,-1));
        
        
        return recursion(nums.size()-1,n,nums,dp);

    }
};