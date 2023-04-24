//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   
    int recursion(int ind,int sum,int val[],int wt[],vector<vector<int>>&dp)
    {
        if(ind==0)
        {
           return ((int)(sum/wt[0]))*val[0];
        }
        if(dp[ind][sum]!=-1)
        {
            return dp[ind][sum];
        }
        int pick=0;
        if(wt[ind]<=sum)
        {
            pick= val[ind]+recursion(ind,sum-wt[ind],val,wt,dp);
        }
        int nonpick=recursion(ind-1,sum,val,wt,dp);
        
        return dp[ind][sum]=max(pick,nonpick);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N,vector<int>(W+1,-1));
        return recursion(N-1,W,val,wt,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends