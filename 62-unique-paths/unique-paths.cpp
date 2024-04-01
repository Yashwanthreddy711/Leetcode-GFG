class Solution {
public:
int recursion(int row,int col,int m,int n,vector<vector<int>>&nums,vector<vector<int>>&dp){
    if(row==m-1 && col==n-1){
        return 1;
    }
    if(row>=m || col>=n)return 0;
    if(dp[row][col]!=-1)return dp[row][col];
    int bottom=recursion(row+1,col,m,n,nums,dp);
    int right=recursion(row,col+1,m,n,nums,dp);
    return dp[row][col]=bottom+right;
}
    int uniquePaths(int m, int n) { 
        vector<vector<int>>nums(m,vector<int>(n));
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return recursion(0,0,m,n,nums,dp);
    }
};