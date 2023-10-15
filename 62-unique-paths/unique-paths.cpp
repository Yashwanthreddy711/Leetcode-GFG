class Solution {
public:
  int recursion(int row, int col, vector<vector<int>>& grid,vector<vector<int>>&dp) {
    if (row < 0 || col < 0) {
        return 0;
    }
    if (row == 0 || col == 0) {
        return 1;
    }
    if(dp[row][col]!=-1){
        return dp[row][col];
    }
    int right = recursion(row, col - 1, grid,dp);
    int down = recursion(row - 1, col, grid,dp);
    return dp[row][col]=right + down;
}

int uniquePaths(int m, int n) {
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    for(int i=0;i<m;i++){
      dp[i][0]=1;
    }
    for(int i=0;i<n;i++){
        dp[0][i]=1;
    }
    
    for(int row=1;row<m;row++){
        for(int col=1;col<n;col++){
            int right=dp[row][col-1];
            int down=dp[row-1][col];
            dp[row][col]=right+down;
        }
    }
    return dp[m-1][n-1];
}

};