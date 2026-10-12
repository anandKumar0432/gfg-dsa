class Solution {
  public:
  
    void solve(vector<vector<int>>& maze, int row, int col, int n, string& path, vector<string>& res){
        
        if(row == n-1 && col == n-1){
            res.push_back(path);
            return;
        }
        
        vector<int> r = {1, -1, 0, 0};
        vector<int> c = {0, 0, 1, -1};
        vector<char> p = {'D', 'U', 'R', 'L'};
        
        for(int i=0; i<=3; i++){
            if(row + r[i] >= 0 && col + c[i] >= 0 && row + r[i] < n && col + c[i] < n && maze[row + r[i]][col + c[i]] == 1){
                path = path + p[i];
                maze[row][col] = 0;
                solve(maze, row + r[i], col + c[i], n, path, res);
                path = path.substr(0, path.size()-1);
                maze[row][col] = 1;
            }
        }
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        string path = "";
        
        vector<string> res;
        int n = maze.size();
        
        if(maze[0][0] == 0) return {};
        solve(maze, 0, 0, n, path, res);
        sort(res.begin(), res.end());
        return res;
    }
};