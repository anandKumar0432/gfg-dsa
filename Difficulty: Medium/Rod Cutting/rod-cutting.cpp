class Solution {
  public:
    int solve(vector<int> &price, int idx, int len, vector<vector<int>>& dp){
        
        if(idx == 0){
            return len * price[0];
        }
        
        if(dp[idx][len] != -1) return dp[idx][len];
        
        int notTake = 0 + solve(price, idx-1, len, dp);
        int take = INT_MIN;
        int rodLen = idx + 1;
        if(rodLen <= len) take = price[idx] + solve(price, idx, len-rodLen, dp);
        
        return dp[idx][len] = max(notTake, take);
    }
    int cutRod(vector<int> &price) {
        // code here
        int n = price.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return solve(price, n-1, n, dp);
    }
};