class Solution {
public:
    int recursion(int row,int col,vector<vector<int>>&nums){
        int n=nums.size();
        if(row>n-1 || col>n-1 || row<0 || col<0)return 1e9;
        if(row==n-1)return nums[row][col];
        int one=recursion(row+1,col-1,nums)+nums[row][col];
        int two=recursion(row+1,col,nums)+nums[row][col];
        int three=recursion(row+1,col+1,nums)+nums[row][col];
        return min(one,min(two,three));
    }
    int minFallingPathSum(vector<vector<int>>& nums) {
        int n=nums.size();
        // int mini=1e9;
        // for(int i=0;i<n;i++){
        //     int ans=recursion(0,i,nums);
        //     int mini=min(mini,ans);
        // }
        // return mini;
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[0][i]=nums[0][i];
        }
        for(int row=1;row<n;row++){
            for(int col=0;col<n;col++){
                int rightdia=nums[row][col];
                int leftdia=nums[row][col];

                if(col+1<n){
                    rightdia+=dp[row-1][col+1];
                } 
                else rightdia+=1e9;
                int up=dp[row-1][col]+nums[row][col];
                if(col-1>=0){
                   leftdia+=dp[row-1][col-1];
                }
                else leftdia+=1e9;
               
                dp[row][col]=min({up,leftdia,rightdia});
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
           mini=min(mini,dp[n-1][i]);
        }
        return mini;
    }
  
};