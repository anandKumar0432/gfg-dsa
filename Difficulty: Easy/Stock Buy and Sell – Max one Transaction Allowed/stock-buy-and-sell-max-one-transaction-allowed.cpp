// class Solution {
//   public:
//     int maxProfit(vector<int> &prices) {
//         // code here
//         int maxi = 0;
        
//         for(int i=0; i<prices.size(); i++){
//             for(int j = i+1; j < prices.size(); j++){
//                 int diff = prices[j] - prices[i];
//                 maxi = max(maxi, diff);
//             }
//         }
        
//         return maxi;
//     }
// };

// USING KADANE'S ALGO

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int maxi = 0;
        int n = prices.size();
        
        vector<int> maxPrice(n, -1);
        
        for (int i = n-1; i>=0; i--){
            maxi = max(maxi, prices[i]);
            maxPrice[i] = maxi;
        }
        
        maxi = 0;
        
        for (int i=0; i<prices.size(); i++){
            maxi = max(maxi, (maxPrice[i]-prices[i]));
        }
        
        return maxi;
    }
};
