class Solution {
  public:
    void dfs(int node, vector<int> adj[], 
        unordered_map<int, bool>& visited, vector<int>& component){
          
        visited[node] = true;
        component.push_back(node);
        
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                dfs(neighbour, adj, visited, component);
            }
        }
    }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> adj[V];
        
        for(auto &e: edges){
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        unordered_map<int, bool> visited;
        vector<vector<int>> res;
        
        for(int i=0; i<V; i++){
            if(!visited[i]){
                vector<int> component;
                dfs(i, adj, visited, component);
                res.push_back(component);
            }
        }
        
        return res;
    }
};
