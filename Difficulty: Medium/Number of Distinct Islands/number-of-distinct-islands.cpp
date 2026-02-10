// User function Template for C++

class Solution {
  public:
  
    void dfs(int row, int col, vector<vector<int>>& grid, 
    vector<pair<int, int>> &list, vector<vector<bool>> &vis, int row0, int col0){
        vis[row][col] = 1;
        list.push_back({row-row0, col-col0});
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> dr = {1,-1,0,0};
        vector<int> dc = {0,0,1,-1};
        
        for(int i = 0; i<4; i++){
            int nr = row + dr[i];
            int nc = col + dc[i];
            if(nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == 1 && !vis[nr][nc]){
                dfs(nr, nc, grid, list, vis, row0, col0);
            }
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int row = grid.size();
        int col = grid[0].size();
        
        vector<vector<bool>> vis(row, vector<bool>(col, 0));
        set<vector<pair<int, int>>> st;
        
        for(int i = 0 ; i<row; i++){
            for(int j = 0; j<col; j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    vector<pair<int, int>> list;
                    dfs(i, j, grid, list, vis, i, j);
                    st.insert(list);
                }
            }
        }
        
        return st.size();
    }
};
