//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
bool mychamp(int ind,int target,vector<int>arr,vector<vector<int>>&dp)
{
    if(target==0)
    {
        return true;
    }
    if(ind==0)
    {
       return(arr[0]==target);
    }
    if(dp[ind][target] != -1)
    {
        return dp[ind][target];
    }
    bool pick = false;
    if(arr[ind]<=target)
    {
         pick=mychamp(ind-1,target-arr[ind],arr,dp);
    }
    
    bool nonpick=mychamp(ind-1,target,arr,dp);
    return dp[ind][target]= pick || nonpick;
}
  
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
    
        int n=arr.size();
        //vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        //return mychamp(n-1,sum,arr,dp);
        vector<vector<bool>>dp(n,vector<bool>(sum+1,0));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
        }
        dp[0][arr[0]]=true;
        for(int ind=1;ind<n;ind++)
        {
            for(int target=1;target<=sum;target++)
            {
                bool pick = false;
                if(arr[ind]<=target)
                 {
                    pick=dp[ind-1][target-arr[ind]];
                  }
    
              bool nonpick=dp[ind-1][target];
              dp[ind][target]= pick || nonpick;
            }
        }
        return dp[n-1][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends