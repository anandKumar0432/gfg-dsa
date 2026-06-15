// class Solution {
//   public:
  
//     int count = 0;
  
//     void solve(vector<int>& arr, int target, int sum, int idx){
        
//         if(idx < 0){
//             if(sum == target){
//                 count++;
//             }
            
//             return;
//         }
        
//         solve(arr, target, sum+arr[idx], idx-1);
//         solve(arr, target, sum, idx-1);
//     }
    
//     int perfectSum(vector<int>& arr, int target) {
//         // code here
//         int n = arr.size();
//         solve(arr, target, 0, n-1);
        
//         return count;
//     }
// };
class Solution {
  public:
    int solve(vector<int>& arr, int target, int idx, vector<vector<int>>& dp){
        if(idx < 0) {
            if(target == 0) return 1;
            return 0;
        }
        if(target < 0) return 0;
        
        if(dp[idx][target] != -1) return dp[idx][target];
        int take = solve(arr, target-arr[idx], idx-1, dp);
        int notTake = solve(arr, target, idx-1, dp);
        
        return dp[idx][target] = take+notTake;
    }
    
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int> (target+1, -1));
        return solve(arr, target, n-1, dp);
    }
};






















