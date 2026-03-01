// User function template for C++
class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        // code here
        int n = 0;
        for(int i =0; i<arr.size(); i++){
            n = n + arr[i];
        }
        
        int left = 0;
        int right = n;
        
        string res = "false";
        
        for(int i = 0; i<arr.size(); i++){
            right = right - arr[i];
            if(i > 0) left = left + arr[i-1];
            
            if(right == left){
                res = "true";
                return res;
            }
        }
        
        return res;
    }
};