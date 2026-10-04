// class Solution {
//   public:
  
//     void permute(string ip, string op, vector<string>& res){
//         if(ip.size() == 0){
//             res.push_back(op);
//             return;
//         }
        
//         set<char> mp;
//         for(int i=0; i<ip.size(); i++){
//             if(mp.find(ip[i]) == mp.end()){
//                 mp.insert(ip[i]);
//                 string newIp = ip.substr(0, i) + ip.substr(i+1);
//                 string newOp = op + ip[i];
//                 permute(newIp, newOp, res);
//             }
//         }
//     }
    
//     vector<string> findPermutation(string &s) {
//         // Code here
//         vector<string> res;
//         permute(s, "", res);
//         return res;
//     }
// };



class Solution {
  public:
  
    void permute(string& s, int start, vector<string>& res){
        if(start == s.size()-1){
            res.push_back(s);
            return;
        }
        
        set<char> mp;
        for(int i=start; i<s.size(); i++){
            if(mp.find(s[i]) == mp.end()){
                mp.insert(s[i]);
                swap(s[i], s[start]);
                permute(s, start+1, res);
                swap(s[i], s[start]);
            }
        }
    }
    
    vector<string> findPermutation(string &s) {
        // Code here
        vector<string> res;
        permute(s, 0, res);
        return res;
    }
};
