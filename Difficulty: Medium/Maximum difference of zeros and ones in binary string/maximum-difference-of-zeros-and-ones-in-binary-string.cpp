// User function template for C++
class Solution {
  public:
    int maxSubstring(string s) {
        // Your code goes here
        int sum = 0;
        
        int maxi = 0;
        
        for(int i=0; i<s.size(); i++){
            if((s[i] - '0') == 0) {
                sum += 1;
                maxi = max(maxi, sum);
            }else if((s[i] - '0') == 1){
                sum -= 1;
                if(sum < 0){
                    sum = 0;
                }
            }
        }
        
        if(maxi == 0) return -1;
        
        return maxi;
    }
};