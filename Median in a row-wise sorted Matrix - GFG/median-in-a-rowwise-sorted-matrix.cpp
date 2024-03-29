//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        vector<int>v;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int n=v.size()-1;
        if(n%2==0)
        {
            return v[n/2];
        }
        else
        {
            return v[(n+1)/2];
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends