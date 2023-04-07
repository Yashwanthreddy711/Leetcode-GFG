//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              
                if(matrix[i][j]==1)
                {
                    for(int k=i;k<n;k++)
                    {
                        ans[k][j]=1;
                        
                    }
                    for(int k=j;k<m;k++)
                    {
                        ans[i][k]=1;
                    }
                    if(i>0)
                    {
                        for(int k=n-1;k>=0;k--)
                        {
                            ans[k][j]=1;
                        }
                    }
                    if(j>0)
                    {
                         for(int k=m-1;k>=0;k--)
                        {
                            ans[i][k]=1;
                        }
                    }
                   
                }
              }
            }
            matrix=ans;
        }
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends