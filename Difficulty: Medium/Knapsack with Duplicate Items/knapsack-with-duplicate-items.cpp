class Solution {
  public:
    int solve(vector<int>& val, vector<int>& wt, int capacity, int idx, vector<vector<int>>& dp){
        
        if(idx < 0) return 0;
        if(capacity == 0) return 0;
        
        if(dp[idx][capacity] != -1) return dp[idx][capacity]; 
        
        int notTake = 0 + solve(val, wt, capacity, idx-1, dp);
        int take = -1e9;
        if(wt[idx] <= capacity) take = val[idx] + solve(val, wt, capacity-wt[idx], idx, dp);
        
        return dp[idx][capacity] = max(take, notTake);
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = wt.size();
        vector<vector<int>> dp(n, vector<int>(capacity+1, -1));
        return solve(val, wt, capacity, n-1, dp);
    }
};