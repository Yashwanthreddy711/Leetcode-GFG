//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int recursion(int ind,int W,int wt[],int val[],vector<vector<int>>&dp)
    {
        
        if(ind==0)
        {
            if(wt[ind]<=W)
            {
                return val[ind];
            }
            return 0;
        }
        if(dp[ind][W] != -1)
        {
            return dp[ind][W];
        }
        int pick=INT_MIN;
        if(wt[ind]<=W)
        {
            pick= val[ind]+recursion(ind-1,W-wt[ind],wt,val,dp);
        }
        int notpick=0+recursion(ind-1,W,wt,val,dp);
        
        return dp[ind][W]= max(pick,notpick);
    }
    int knapSack(int W, int wts[], int val[], int n) 
    { 
       // Your code here
    //   vector<vector<int>>dp(n,vector<int>(W+1,-1));
    vector<vector<int>>dp(n,vector<int>(W+1,0));
    
    for(int w=wts[0];w<=W;w++)
    {
        dp[0][w]=val[0];
    }
    for(int ind=1;ind<n;ind++)
    {
        for(int wt=0;wt<=W;wt++)
        {
           int pick=INT_MIN;
          if(wts[ind]<=wt)
        {
            pick= val[ind]+dp[ind-1][wt-wts[ind]];
        }
        int notpick=0+dp[ind-1][wt];
        
         dp[ind][wt]= max(pick,notpick); 
        }
    }
       return dp[n-1][W];
       
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends