class Solution {
  public:
  
    void dfs(int node, stack<int> &st, vector<int> adj[], int vis[]){
        vis[node] = 1;
        
        for(auto x : adj[node]){
            if(!vis[x]){
                dfs(x, st, adj, vis);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> adj[V];
        vector<int> ans;
        
        for(int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        int vis[V] = {0};
        stack<int> st;
        
        for (int i=0; i<V; i++){
            if(!vis[i]){
                dfs(i, st, adj, vis);
            }
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
};