class Solution {
public:
    int recursion(int row,int col,vector<vector<int>>& nums,vector<vector<int>>&dp)
    {
        int n=nums.size();
        if(row==n-1)return nums[row][col];
        if(dp[row][col]!=-1)return dp[row][col];
        int one=recursion(row+1,col,nums,dp)+nums[row][col];
        int two=recursion(row+1,col+1,nums,dp)+nums[row][col];
        return dp[row][col]=min(one,two);
    }
    int minimumTotal(vector<vector<int>>& nums) {
        int n=nums.size();
        
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
           dp[n-1][i]=nums[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int one=nums[i][j]+dp[i+1][j];
                int two=nums[i][j]+dp[i+1][j+1];
                dp[i][j]=min(one,two);
            }
        }
         return dp[0][0];
    }
};