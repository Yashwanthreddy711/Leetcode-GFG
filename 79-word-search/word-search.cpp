class Solution {
public:
 
   bool recursion(int ind, vector<vector<char>>& board, string word, int delrow[], int delcol[], int row, int col, vector<vector<int>>& vis) {
int n = board.size();
int m = board[0].size();
vis[row][col] = 1;
if (ind == word.size() - 1) {
return true;
}
bool res = false; 
for (int i = 0; i < 4; i++) {
int nrow = delrow[i] + row;
int ncol = delcol[i] + col;
if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && board[nrow][ncol] == word[ind + 1] && !vis[nrow][ncol]) {
res = recursion(ind + 1, board, word, delrow, delcol, nrow, ncol, vis);
if (res) { 
vis[row][col] = 0; 
return true;
}
}
}
vis[row][col] = 0; 
return false;
}

bool exist(vector<vector<char>>& board, string word) {
int delrow[] = {0,1,0,-1};
int delcol[] = {1,0,-1,0};
int n = board.size();
int m = board[0].size();
vector<vector<int>> vis(n, vector<int>(m, 0));
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
if (board[i][j] == word[0]) {
if (recursion(0, board, word, delrow, delcol, i, j, vis)) {
return true;
}
}
}
}
return false;
}
};