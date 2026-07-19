class Solution {
  public:
    int lis(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n, 1);
        int maxi = 1;
        int lastIndex = 0;
        for(int i=0; i<n; i++){
            for(int prev = 0; prev < i; prev++){
                if(arr[prev] < arr[i]){
                    dp[i] = max(1+dp[prev], dp[i]);
                }
            }
            maxi = max(maxi, dp[i]);
        }

        return maxi;
    }
};