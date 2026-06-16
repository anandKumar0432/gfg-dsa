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




// class Solution {
//   public:
//     int solve(vector<int>& arr, int target, int idx, vector<vector<int>>& dp){
//         // if(target == 0) return 1;
//         // if(idx == 0) return (arr[idx] == target);
        
//         if(idx == 0){
//             if(target == 0 && arr[0] == 0) return 2;
//             if(target == 0 || arr[0] == target) return 1;
//             return 0;
//         }
        
//         if(dp[idx][target] != -1) return dp[idx][target];
//         int take = 0;
//         if(arr[idx] <= target) take = solve(arr, target-arr[idx], idx-1, dp);
//         int notTake = solve(arr, target, idx-1, dp);
        
//         return dp[idx][target] = take+notTake;
//     }
    
//     int perfectSum(vector<int>& arr, int target) {
//         // code here
//         int n = arr.size();
//         vector<vector<int>> dp(n, vector<int> (target+1, -1));
//         return solve(arr, target, n-1, dp);
//     }
// };




class Solution {
  public:
    
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int> (target+1, 0));
        
        if(arr[0] == 0) dp[0][0] = 2;
        else dp[0][0] = 1;
        
        if(arr[0] != 0 && arr[0] >= 0 && arr[0] <= target) dp[0][arr[0]] = 1;
        
        for(int i=1; i<n; i++){
            for(int tar = 0; tar <= target; tar++){
                int notTake = dp[i-1][tar];
                int take = 0;
                if(arr[i] <= tar) take = dp[i-1][tar-arr[i]];
                
                dp[i][tar] = take + notTake;
            }
        }
        
        return dp[n-1][target];
    }
};






















