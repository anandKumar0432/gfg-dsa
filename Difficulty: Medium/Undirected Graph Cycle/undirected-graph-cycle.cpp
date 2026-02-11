class Solution {
  public:
  
    bool dfs(int node, int parent, vector<int> adj[],  vector<bool> &vis){
        
        vis[node] = true;
        
        for(auto x : adj[node]){
            if(!vis[x]){
                if(dfs(x, node, adj, vis))
                    return true;
            }else if(x != parent){
                return true;
            }
        }
        
        return false;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int> adj[V];
        
        for(int i=0; i<edges.size(); i++){
            
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        
        vector<bool> vis(V, false);
        
        for(int i = 0; i<V; i++){
            if(!vis[i]){
                if(dfs(i, -1, adj, vis))
                return true;
            }
        }
        
        return false;
    }
};