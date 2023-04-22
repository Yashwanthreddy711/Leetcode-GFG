//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int mod=(int)(1e9+7);
    int count(int ind,int sum,vector<int>&arr,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(sum==0 && arr[0]==0)
                return 2;
            if(sum==0 || sum == arr[0])
                return 1;
            return 0;
        }
        if(dp[ind][sum] != -1)
        {
            return dp[ind][sum];
        }
        int pick=0;
        if(arr[ind]<=sum)
        {
           pick=count(ind-1,sum-arr[ind],arr,dp);  
        }
        int nonpick=count(ind-1,sum,arr,dp);
        
        return dp[ind][sum]=(pick+nonpick)%mod;
        
    }
    int countPartitions(int n, int d, vector<int>& arr) {
        int total=0;
        for(auto it:arr)
        {
            total=total+it;
        }
        int val=(total-d);
        if(val<0 || val%2 !=0)
        {
            return 0;
        }
        vector<vector<int>>dp(n,vector<int>((val/2 + 1),-1));
        return count(n-1,val/2,arr,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends