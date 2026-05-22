class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> DP(m,vector<int>(n,0));
        DP[0][0]=grid[0][0];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) continue;
                else{
                    int up=INT_MAX,left=INT_MAX;
                    if(i>0) up=DP[i-1][j]+grid[i][j];
                    if(j>0) left=DP[i][j-1]+grid[i][j];
                    DP[i][j]=min(up,left);
                }
            }
        }
        return DP[m-1][n-1];
    }
};