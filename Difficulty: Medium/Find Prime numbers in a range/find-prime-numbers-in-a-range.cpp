// User function Template for C++

class Solution {
  public:
  
    bool isPrime(int n) {
        // code here
        if(n == 1) return false;
        if(n == 2) return true;
        
        for(int i=2; i*i <= n; i++){
            if(n % i == 0) return false;
        }
        
        return true;
    }
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> res;
        for(int i=M; i<=N; i++){
            if(isPrime(i))
                res.push_back(i);
        }
        
        return res;
    }
};