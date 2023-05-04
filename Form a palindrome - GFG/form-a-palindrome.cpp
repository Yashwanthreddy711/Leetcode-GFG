//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
  
  int lcs(string A,string B)
  {
      
       int n=A.size();
       int m=B.size();
       vector<vector<int>>dp(n+1,vector<int>(m+1,0));
       
       for(int i=0;i<=n;i++)
       {
           dp[0][i]=0;
       }
       for(int j=0;j<=m;j++)
       {
           dp[j][0]=0;
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
                   dp[ind1][ind2]=0+max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
               }
           }
       }
       return dp[n][m];
       
  }
    int longestPalinSubseq(string A) {
        string B=A;
        reverse(B.begin(),B.end());
       return lcs(A,B);
    }
    int countMin(string str){
      return str.size()-longestPalinSubseq(str);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends