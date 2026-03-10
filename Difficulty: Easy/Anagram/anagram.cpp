class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        
        unordered_map<char, int> mp;
        int n1 = s1.size();
        int n2 = s2.size();
        
        if(n1 != n2) return false;
        
        for(int i=0; i<n1; i++){
            mp[s1[i]]++;
        }
        
        for(int i=0; i<n2; i++){
            mp[s2[i]]--;
        }
        
        for(auto it: mp){
            if(it.second != 0) return false;
        }
        
        return true;
    }
};