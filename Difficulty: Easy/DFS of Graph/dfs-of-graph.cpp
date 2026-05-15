class Solution {
  public:
  
    void dfsRec(vector<vector<int>>& adj, vector<int> &visited, 
        vector<int> &res, int s){
            visited[s] = true;
            res.push_back(s);
            
            for(int x : adj[s]){
                if(!visited[x]){
                    dfsRec(adj, visited, res, x);
                }
            }
        }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> visited(adj.size(), false);
        vector<int> res;
        
        dfsRec(adj, visited, res, 0);
        
        return res;
    }
};