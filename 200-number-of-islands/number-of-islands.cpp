class Solution {
public:

   
    void dfs(int row,int col,vector<vector<char>>& grid,vector<vector<int>>& vis,int delrow[],int delcol[]){
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow<n && ncol<m && nrow>=0 && ncol>=0 && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                dfs(nrow,ncol,grid,vis,delrow,delcol);
            }
        }
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        int delrow[]={1,0,-1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(grid[i][j]=='1' && !vis[i][j]){
                    count++;
                    dfs(i,j,grid,vis,delrow,delcol);
               }
            }
        }
        return count;
    }
};