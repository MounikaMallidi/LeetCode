class Solution {
public:
    bool issafe(int row,int col,int n,vector<string>& board){
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col,int n,vector<vector<string>>& res, vector<string>& board){
        if(col==n){
            res.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(issafe(row,col,n,board)){
                board[row][col]='Q';
                solve(col+1,n,res,board);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,n,res,board);
        return res;
    }
};