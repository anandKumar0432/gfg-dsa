class Solution {
  public:
  
    int solve(vector<vector<int>>& mat, vector<vector<int>> &dp, int day, int last){
        if(day == 0){
            int maxi = 0;
            for(int i=0; i<=2; i++){
                if(i != last)
                    maxi = max(maxi, mat[day][i]); 
            }
            return maxi; 
        }
        
        if(dp[day][last] != -1) return dp[day][last];
        
        int maxi = 0;
        for(int i=0; i<=2; i++){
            if(i != last){
                int points = mat[day][i] + solve(mat, dp, day-1, i);
                maxi = max(maxi, points);
            }
        }
        
        return dp[day][last] = maxi;
    }
    int maximumPoints(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int last = 3;
        int day = n-1;
        vector<vector<int>> dp(n, vector<int>(4, -1));
        return solve(mat, dp, day, last);
    }
};