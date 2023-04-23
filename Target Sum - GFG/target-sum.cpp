//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  
  
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
        
        return dp[ind][sum]=(pick+nonpick);
        
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
    int findTargetSumWays(vector<int>&A ,int target) {
        //Your code here
        return countPartitions(A.size(),target,A);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends