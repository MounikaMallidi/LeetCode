class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> rowmax(n);
        vector<int> colmax(n);
        for(int i=0;i<n;i++){
            int row=0,col=0;
            for(int j=0;j<n;j++){
                row=max(grid[i][j],row);
                col=max(grid[j][i],col);
            }
            rowmax[i]=row;
            colmax[i]=col;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int oldval=grid[i][j];
                grid[i][j]=min(rowmax[i],colmax[j]);
                int newval=grid[i][j];
                sum+=(newval-oldval);
            }                                                                          
        }
        return sum;
    }
};