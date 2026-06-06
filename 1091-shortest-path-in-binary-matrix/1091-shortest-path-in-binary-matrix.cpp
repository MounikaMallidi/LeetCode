class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int,pair<int,int>>> q;
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[0][0]=1;
        q.push({1,{0,0}});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int dis=it.first;
            int r=it.second.first;
            int c=it.second.second;
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int newr=r+i;
                    int newc=c+j;
                    if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==0 &&
                    dist[newr][newc]>1+dis){
                        dist[newr][newc]=1+dis;
                        q.push({1+dis,{newr,newc}});
                    }
                }
            }
        }
        return dist[n-1][n-1] == 1e9 ? -1 : dist[n-1][n-1];
    }
};