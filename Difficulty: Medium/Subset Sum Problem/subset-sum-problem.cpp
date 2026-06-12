// class Solution {
//   public:
//     bool solve(vector<int>& arr, vector<vector<int>> &dp, int sum, int idx){
//         if(sum == 0) return true;
//         if(idx >= arr.size() || sum < 0) return false;
//         if(dp[idx][sum] != -1) return (dp[idx][sum] == 1);
//         bool pick = solve(arr, dp, sum-arr[idx], idx+1);
//         bool notPick = solve(arr, dp, sum, idx+1);
        
//         return dp[idx][sum] = (pick || notPick);
//     }
//     bool isSubsetSum(vector<int>& arr, int sum) {
//         // code here
//         int n = arr.size();
//         vector<vector<int>> dp(n, vector<int>(sum+1, -1));
//         return solve(arr, dp, sum, 0);
//     }
// };





class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<bool>> dp(n, vector<bool>(sum+1, 0));
        
        for(int i=0; i<n; i++) dp[i][0] = true;
        dp[0][arr[0]] = true;
        
        for(int i=1; i<n; i++){
            for(int target = 1; target <= sum; target++){
                bool notTake = dp[i-1][target];
                bool take = false;
                if(arr[i] <= target) take = dp[i-1][target-arr[i]];
                dp[i][target] = take | notTake;
            }
        }
        
        return dp[n-1][sum];
    }
};