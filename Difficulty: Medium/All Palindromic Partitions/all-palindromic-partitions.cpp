class Solution {
  public:
    bool isPalindrome(int s, int e, string str){
        while(s <= e){
            if(str[s++] != str[e--]) return false;
        }
        
        return true;
    }
    void solve(int start, string &s, vector<vector<string>> &res, vector<string> &path){
        if(start == s.size()){
            res.push_back(path);
            return;
        }
        
        for(int i=start; i<s.size(); i++){
            if(isPalindrome(start, i, s)){
                path.push_back(s.substr(start, i - start + 1));
                solve(i+1, s, res, path);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> palinParts(string &s) {
        // code here
        vector<vector<string>> res;
        vector<string> path;
        solve(0, s, res, path);
        
        return res;
    }
};