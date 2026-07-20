class Solution {
  public:
    int longestBitonicSequence(int n, vector<int> &arr) {
        // code here
        vector<int> dp(n, 1);
        
        for(int i=0; i<n; i++){
            for(int prev = 0; prev < i; prev++){
                if(arr[prev] < arr[i]){
                    dp[i] = max(1+dp[prev], dp[i]);
                }
            }
        }
        
        vector<int> dp2(n, 1);
        int max2 = 1;
        
        for(int i=n-1; i>=0; i--){
            for(int prev = n-1; prev > i; prev--){
                if(arr[prev] < arr[i]){
                    dp2[i] = max(1+dp2[prev], dp2[i]);
                }
            }
        }
        
        int maxi = 0;
        
        for(int i=0; i<n; i++){
            if(dp[i] > 1 && dp2[i] > 1){
                maxi = max(maxi, dp[i] + dp2[i] - 1);
            }
        }
        
        return maxi;
    }
};
