//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int recursion(int n,int k,vector<int>&height,vector<int>&dp)
  {
      if(n==0)
      {
          return 0;
      }
      int mini=INT_MAX;
      if(dp[n]!=-1)
      {
          return dp[n];
      }
      for(int j=1;j<=k;j++)
      {
          int jump;
          if(n-j>=0)
          {
            jump = recursion(n-j,k,height,dp)+abs(height[n]-height[n-j]); 
          }
          
           mini=min(jump,mini);
      }
      return dp[n]=mini;
  }
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int>dp(n,-1);
        return recursion(n-1,k,height,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends