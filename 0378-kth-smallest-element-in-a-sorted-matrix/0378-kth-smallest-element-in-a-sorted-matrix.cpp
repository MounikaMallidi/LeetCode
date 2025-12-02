class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> temp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                temp.push_back(matrix[i][j]);
            }
        }
        sort(temp.begin(),temp.end());
        for(int i=1;i<=temp.size();i++){
            if(i==k){
                return temp[i-1];
            }
        }

    return 0;
    }
};