class Solution {
public:
    bool bfs(int start,int n,vector<vector<int>>& graph,vector<int> &color){
        color[start]=0;
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto adjnode:graph[node]){
                if(color[adjnode]==-1){
                    color[adjnode]=!color[node];
                    q.push(adjnode);
                }
                else if(color[adjnode]==color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n);
        for(int i=0;i<n;i++) color[i]=-1;
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(bfs(i,n,graph,color)==false) return false;
            }
        }
        return true;
    }
};