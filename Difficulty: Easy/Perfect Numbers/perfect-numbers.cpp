class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        
        long long sum = 1;
        
        for(int i=2; i*i <= n; i++){
            if(n % i == 0) {
                sum += i;
                
                if(i != n / i)
                    sum += n / i;
            }
        }
        
        if(sum == n) return true;
        
        return false;
    }
};