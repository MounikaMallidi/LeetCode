class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int> arr;
        int n=grid.size();
        for(int i=0;i<n;i++){
            int j;
            for(j=n-1;j>=0;j--){
                if(grid[i][j]==1){
                    break;
                }
            }
           arr.push_back(j);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            bool possible=false;
            for(int j=i;j<n;j++){
               if(arr[j]<=i){
                    for(int k=j;k>i;k--){
                        swap(arr[k],arr[k-1]);
                        cnt++;
                    }
                    possible=true;
                    break;
               }
            }
            if(!possible) return -1;
        }
        return cnt;
    }
};