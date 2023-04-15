//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int n, int nums[])
    {
        int sum=0;
      //int n=nums.size();
      for(int i=0;i<n;i++)
      {
          sum=sum+nums[i];
      }  
      if(sum%2!=0)
      {
        return false;
      }
      else
      {
           sum=sum/2;
         //vector<vector<int>>dp(n,vector<int>(sum+1,-1));

         vector<vector<bool>>dp(n,vector<bool>(sum+1,0));
         for(int i=0;i<n;i++)
         {
             dp[i][0]=true;
         }
        if(nums[0] <= sum) dp[0][nums[0]] = true;
          for(int ind=1;ind<n;ind++)
        {
            for(int target=1;target<=sum;target++)
            {
                bool pick = false;
                if(nums[ind]<=target)
                 {
                    pick=dp[ind-1][target-nums[ind]];
                  }
    
              bool nonpick=dp[ind-1][target];
              dp[ind][target]= pick || nonpick;
            }
        }
        return dp[n-1][sum];
         //return mychamp(n-1,sum,nums,dp);
      }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends