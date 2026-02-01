class Solution {
public:
    bool wordsearch(int idx_m,int idx_n,int k,vector<vector<char>>& board, string word){
        int m=board.size();
        int n=board[0].size();
        if(k==word.size()){
            return true;
        }
        if(idx_m<0 || idx_m>=m || idx_n<0 || idx_n>=n || board[idx_m][idx_n]!=word[k]){
            return false;
        }
        int temp=board[idx_m][idx_n];
        board[idx_m][idx_n]='#';
        bool found=wordsearch(idx_m,idx_n+1,k+1,board,word) ||
                   wordsearch(idx_m+1,idx_n,k+1,board,word) ||
                   wordsearch(idx_m,idx_n-1,k+1,board,word) ||
                   wordsearch(idx_m-1,idx_n,k+1,board,word);
        board[idx_m][idx_n]=temp;
        return found; 
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(wordsearch(i,j,0,board,word)){
                    return true;
                }
            }
        }
        return false;
    }
};