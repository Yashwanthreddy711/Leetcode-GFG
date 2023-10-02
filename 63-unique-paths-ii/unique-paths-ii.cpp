class Solution {
public:

    int recursion(int row,int col,vector<vector<int>>& nums,vector<vector<int>>&dp){
         if(nums[row][col]==1)return 0 ;
         if(row==0 && col==0)return 1;
         if(dp[row][col]!=-1)return dp[row][col];
        int top=0;
        int bottom=0;
        if(row>0){
           top=recursion(row-1,col,nums,dp);    
        }
        if(col>0){
           bottom=recursion(row,col-1,nums,dp);
        }
        return dp[row][col]=top+bottom;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return recursion(n-1,m-1,nums,dp);
    }
};