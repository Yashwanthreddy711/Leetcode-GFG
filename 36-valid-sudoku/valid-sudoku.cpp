class Solution {
public:
    bool check(int srow,int erow,int scol,int ecol,vector<vector<char>>& board){
        set<int>st;
        int cnt=0;
        for(int i=srow;i<=erow;i++){
            for(int j=scol;j<=ecol;j++){
                   if(board[i][j]!='.'){
                    cnt++;
                    st.insert(board[i][j]);
                }
            }
        }
          if(st.size()!=cnt){
                return false;
            }
           return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            set<char>st;
            int cnt=0;
            for(int j=0;j<m;j++){
                if(board[i][j]!='.'){
                    cnt++;
                    st.insert(board[i][j]);
                }
            }
            if(st.size()!=cnt)return false;
            set<int>st2;
            cnt=0;
            for(int k=0;k<n;k++){
                 if(board[k][i]!='.'){
                    cnt++;
                    st2.insert(board[k][i]);
                }
            }
            if(st2.size()!=cnt){
                return false;
            }
        }

        if(!check(0,2,0,2,board)){
           return false;
        }
        if(!check(0,2,3,5,board)){
            return false;
        }
        if(!check(0,2,6,8,board)){
            return false;
        }
        if(!check(3,5,0,2,board)){
            return false;
        }
        if(!check(3,5,3,5,board)){
            return false;
        }
        if(!check(3,5,6,8,board)){
            return false;
        }
        if(!check(6,8,0,2,board)){
            return false;
        }
        if(!check(6,8,3,5,board)){
            return false;
        }if(!check(6,8,6,8,board)){
            return false;
        }
        
        return true;
    }
};