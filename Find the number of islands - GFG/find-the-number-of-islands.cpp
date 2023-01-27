//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   
//   bool isvalid(int row,int col,vector<vector<char>>& grid)
//   {
//       int n=grid.size();
//       int m=grid[0].size();
//       if(row>=0 && row<n && col>=0 && col<m && grid[row][col]=='1')
//       {
//           return true;
//       }   
//       return false;
//   }
  void dfs(int row,int col,vector<vector<char>>& grid)
  {
      int n=grid.size();
      int m=grid[0].size();

      grid[row][col]='0';
      for(int delrow=-1;delrow<=1;delrow++)
          {
              for(int delcol=-1;delcol<=1;delcol++)
              {
                  int nrow=row+delrow;
                  int ncol=col+delcol;
                  if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' )
                  {
                     dfs(nrow,ncol,grid);  
                  }
              }          }

      
  }
   
    int numIslands(vector<vector<char>>& grid) {
      
      int n=grid.size();
      int m=grid[0].size();
      int count=0;
      for(int row=0;row<n;row++)
      {
          for(int col=0;col<m;col++)
          {
             if(grid[row][col]=='1')
             {
                 count++;
                 dfs(row,col,grid);
             }
          }
      }
         return count;
        
    }
    
    
    // for(int delrow=-1;delrow<=1;delrow++)
    //       {
    //           for(int delcol=-1;delcol<=1;delcol++)
    //           {
    //               int nrow=row+delrow;
    //               int ncol=col+delcol;
    //               if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol])
    //               {
    //                   vis[nrow][ncol]=1;
    //                  q.push({nrow,ncol});
    //               }
    //           }          }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends