class Solution {
  public:
  
    int fact(int n){
        if(n <= 1) return 1;
        return n * fact(n-1);
    }
    int isStrong(int N) {
        // code here
        int sum = 0;
        int n = N;
        
        while(N > 0){
            int digit = N % 10;
            N = N / 10;
            
            sum += fact(digit);
        }
        
        if(n == sum)
            return 1;
        
        return 0;    
    }
};