//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr(string s1, string s2, int x, int y)
{
    int ans = 0;
    vector<vector<int>> dp(x + 1, vector<int>(y + 1, 0));
    for (int i = 0; i <= x; i++) {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= y; i++) {
        dp[0][i] = 0;
    }

    for (int ind1 = 1; ind1 <= x; ind1++) {
        for (int ind2 = 1; ind2 <= y; ind2++) {
            if (s1[ind1 - 1] == s2[ind2 - 1]) {
                dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
                ans = max(ans, dp[ind1][ind2]);
            }
            else {
                dp[ind1][ind2] = 0;
            }
        }
    }

    return ans;
}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends