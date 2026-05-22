class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> DP(n,vector<int>(n));
        for(int i=0;i<n;i++){
            DP[n-1][i]=triangle[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                int x=DP[i+1][j]+triangle[i][j];
                int y=DP[i+1][j+1]+triangle[i][j];
                DP[i][j]=min(x,y);
            }
        }
        return DP[0][0];
    }
};