class NumMatrix {
public:
    vector<vector<int>> presum;
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        presum.resize(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0){
                    presum[i][j]=matrix[i][j];
                }
                else if(i==0 && j>0){
                    presum[i][j]=presum[i][j-1]+matrix[i][j];
                }
                else if(i>0 && j==0){
                    presum[i][j]=presum[i-1][j]+matrix[i][j];
                }
                else{
                    presum[i][j]=matrix[i][j]+presum[i-1][j]+presum[i][j-1]-presum[i-1][j-1];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=presum[row2][col2];
        if(row1 >0){
            sum-=presum[row1-1][col2];
        }
        if(col1>0){
            sum-=presum[row2][col1-1];
        }
        if(row1>0 && col1>0){
            sum+=presum[row1-1][col1-1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */