class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        int edge = edges.size();
        
        vector<pair<int, int> >adj[V];
        
        for(int i=0; i<edge; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }
        
        set<pair<int, int> > st;
        st.insert(make_pair(0,src));
        
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;
        
        while(!st.empty()){
            
            auto top = *(st.begin());
            int nodeDist = top.first;
            int topNode = top.second;
            
            st.erase(st.begin());
            
            for(auto neighbour : adj[topNode]){
                if(nodeDist + neighbour.second < dist[neighbour.first]){
                    
                    auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
                    if(record != st.end()){
                        st.erase(make_pair(dist[neighbour.first], neighbour.first));
                    }
                    
                    dist[neighbour.first] = nodeDist + neighbour.second;
                    st.insert(make_pair(nodeDist + neighbour.second, neighbour.first));
                }
            }
        }
        
        return dist;
    }
};





