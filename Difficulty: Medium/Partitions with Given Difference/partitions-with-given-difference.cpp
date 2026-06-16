class Solution {
  public:
  
    int solve(vector<int>& arr, int target, int idx, vector<vector<int>>& dp){
        // if(target == 0) return 1;
        // if(idx == 0) return (arr[idx] == target);
        
        if(idx == 0){
            if(target == 0 && arr[0] == 0) return 2;
            if(target == 0 || arr[0] == target) return 1;
            return 0;
        }
        
        if(dp[idx][target] != -1) return dp[idx][target];
        
        int take = 0;
        if(arr[idx] <= target) take = solve(arr, target-arr[idx], idx-1, dp);
        int notTake = solve(arr, target, idx-1, dp);
        
        return dp[idx][target] = take+notTake;
    }
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        int n = arr.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        int target = (sum - diff);
        
        if(target < 0 || target % 2 != 0) return 0;
        vector<vector<int>> dp(n, vector<int>(target/2 + 1, -1));
        return solve(arr, target/2, n-1, dp);
    }
};