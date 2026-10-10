class Solution {
  public:
  
    void solve(string& s, int k, int start, string& res){
        if(k == 0 || start >= s.size()){
            return;
        }
        
        char max = *max_element(s.begin()+start+1, s.end());
        
        for(int i=start+1; i<s.size(); i++){
            
            if(s[start] - '0' < s[i] - '0' || s[i]-0 == max-'0'){
                swap(s[start], s[i]);
                if(s.compare(res) > 0) res = s;
                solve(s, k-1, start+1, res);
                swap(s[start], s[i]);
            }
        }
        
        solve(s,k, start+1, res);
    }
    string findMaximumNum(string& s, int k) {
        // code here.
        string res = s;
        solve(s, k, 0, res);
        return res;
    }
};