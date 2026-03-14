// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    
    int fib(int n){
        if(n == 0 || n == 1) return n;
        
        return fib(n-1) + fib(n-2);
    }
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> res;
        
        int temp = 0;
        
        for(int i=0; i<n; i++){
            res.push_back(fib(i));
        }
        
        return res;
    }
};