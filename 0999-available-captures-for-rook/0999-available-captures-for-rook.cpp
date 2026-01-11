class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int n=board.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='R'){
                    int left=j-1,right=j+1,top=i-1,bottom=i+1;
                    while(left>=0){
                        if(board[i][left]=='B'){
                            break;
                        }
                        if(board[i][left]=='p'){
                            cnt++;
                            break;
                        }
                        left--;
                    }
                    while(right<n){
                        if(board[i][right]=='B'){
                            break;
                        }
                        if(board[i][right]=='p'){
                            cnt++;
                            break;
                        }
                        right++;
                    }
                    while(top>=0){
                        if(board[top][j]=='B'){
                            break;
                        }
                        if(board[top][j]=='p'){
                            cnt++;
                            break;
                        }
                        top--;
                    }
                    while(bottom<n){
                        if(board[bottom][j]=='B'){
                            break;
                        }
                        if(board[bottom][j]=='p'){
                            cnt++;
                            break;
                        }
                        bottom++;
                    }
                }
            }
        }
        return cnt;
    }
};