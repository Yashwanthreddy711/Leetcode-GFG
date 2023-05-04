//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
int lcs(string A,string B,int n,int m)
{
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int j=0;j<=m;j++)
    {
        dp[0][j]=0;
    }

    for(int ind1=1;ind1<=n;ind1++)
    {
        for(int ind2=1;ind2<=m;ind2++)
        {
            if(A[ind1-1]==B[ind2-1])
            {
                dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
            }
            else{
                dp[ind1][ind2]=max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
            }
        }
    }

    return dp[n][m];
}

int minOperations(string str1, string str2) 
{ 
    int n=str1.size();
    int m=str2.size();

    if(n == 0) {
        return m;
    }

    if(m == 0) {
        return n;
    }

    return n+m - 2*lcs(str1,str2,n,m);
}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends