class Solution {
  public:
    bool solve(vector<int>& arr, vector<vector<int>> &dp, int sum, int idx){
        if(sum == 0) return true;
        if(idx >= arr.size() || sum < 0) return false; 
        if(dp[idx][sum] != -1) return (dp[idx][sum] == 1);
        bool pick = solve(arr, dp, sum-arr[idx], idx+1);
        bool notPick = solve(arr, dp, sum, idx+1);
        
        return dp[idx][sum] = (pick || notPick);
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum+1, -1));
        return solve(arr, dp, sum, 0);
    }
};