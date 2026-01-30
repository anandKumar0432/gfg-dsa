class Solution {
  public:
  
    void solve(int node, vector<vector<int>>& adj, unordered_map<int, bool>& visited, vector<int>& res){
        res.push_back(node);
        visited[node] = true;
        
        for(int i=0; i<adj[node].size(); i++){
            int neighbour = adj[node][i];
            if(!visited[neighbour]){
                solve(neighbour, adj, visited, res);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> res;
        unordered_map<int, bool> visited;
        for(int i=0; i<adj.size(); i++){
            if(!visited[i]){
                solve(i, adj, visited, res);
            }
        }
        return res;
    }
};