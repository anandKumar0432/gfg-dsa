class Solution {
  public:
    void solve(int start, vector<int>& res, int& temp, int n){
        if(n == 0){
            res.push_back(temp);
            return;
        }
        
        for(int i=start; i<=9; i++){
            
            temp = temp*10 + i;
            solve(i+1, res, temp, n-1);
            temp = temp/10;
        }
        
    }
    vector<int> increasingNumbers(int n) {
        // code here
        int temp = 0;
        vector<int> res;
        if(n > 9 || n <= 0) return {};
        if(n == 1) res.push_back(0);
        solve(1, res, temp, n);
        
        return res;
    }
};