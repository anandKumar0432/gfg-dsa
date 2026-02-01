class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        queue<int> q;
        unordered_map<int, bool> visited;
        vector<int> res;
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int i=0; i<adj[node].size(); i++){
                int neighbour = adj[node][i];
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
            res.push_back(node);
        }
        return res;
    }
};