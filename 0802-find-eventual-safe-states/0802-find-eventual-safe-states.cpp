class Solution {
public:
     bool dfsCheck(int node,vector<vector<int>> &adj,vector<int> &vis,vector<int> &vispath){
        vis[node]=1;
        vispath[node]=1;
        for(auto adjnode:adj[node]){
            if(!vis[adjnode]){
                if(dfsCheck(adjnode,adj,vis,vispath)==true) return true;
            }
            else if(vispath[adjnode]){
                return true;
            }
        }
        vispath[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V=adj.size();
        vector<int> vis(V,0);
        vector<int> vispath(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfsCheck(i,adj,vis,vispath);
            }
        }
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(vispath[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};