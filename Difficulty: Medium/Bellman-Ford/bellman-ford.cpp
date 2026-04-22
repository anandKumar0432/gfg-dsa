// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        int temp = 1e8;
        vector<int> dist(V, temp);
        dist[src] = 0;
        
        for(int i=0; i<V-1; i++){
            for(auto x : edges){
                int u = x[0];
                int v = x[1];
                int w = x[2];
                if(dist[u] != temp && dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
                }
            }
        }
        
        for(auto x : edges){
                int u = x[0];
                int v = x[1];
                int w = x[2];
                if(dist[u] != temp && dist[u] + w < dist[v]){
                    return {-1};
                }
            }
        
        return dist;
    }
};
