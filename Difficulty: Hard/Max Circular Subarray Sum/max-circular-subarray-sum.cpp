// class Solution {
//   public:
//     int maxCircularSum(vector<int> &arr) {
//         // code here
//         int maxi = INT_MIN;
//         int sum = 0;
        
//         int start = 1;
        
//         for(int i=0; i<arr.size(); i++){
//             for(int j = i; j<(arr.size() + i) ; j++){
//                 int temp = j % arr.size();
//                 sum += arr[temp];
                
//                 maxi = max(maxi, sum);
//             }
//             sum = 0;
//         }
        
//         return maxi;
//     }
    
    
    
    
class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int maxCurr = 0;
        int maxSum = arr[0];
        
        int minCurr = 0;
        int minSum = arr[0];
        
        int total = 0;
        
        for(int i=0; i<arr.size(); i++){
            maxCurr = max(arr[i], maxCurr + arr[i]);
            maxSum = max(maxSum, maxCurr);
            
            minCurr = min(arr[i], minCurr + arr[i]);
            minSum = min(minSum, minCurr);
            
            total += arr[i];
        }
        
        
        if(maxSum < 0) return maxSum;
        
        return max(maxSum, total - minSum);
        
    }
};

































