class Solution {
  public:
  
    void permute(string ip, string op, vector<string>& res){
        if(ip.size() == 0){
            res.push_back(op);
            return;
        }
        
        set<char> mp;
        for(int i=0; i<ip.size(); i++){
            if(mp.find(ip[i]) == mp.end()){
                mp.insert(ip[i]);
                string newIp = ip.substr(0, i) + ip.substr(i+1);
                string newOp = op + ip[i];
                permute(newIp, newOp, res);
            }
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here
        vector<string> res;
        permute(s, "", res);
        return res;
    }
};
