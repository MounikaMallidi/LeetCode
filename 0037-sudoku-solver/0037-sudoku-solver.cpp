class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& board){
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isvalid(i,j,c,board)){
                            board[i][j]=c;
                            if(solve(board)==true){
                                return true;
                            }
                            else{
                                board[i][j]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isvalid(int row,int col,int c,vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            if(board[i][col]==c){
                return false;
            }
            if(board[row][i]==c){
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){
                return false;
            }
        }
        return true;
    }
};