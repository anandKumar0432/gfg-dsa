class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int curr = 0;
        int next = 1;
        int total = 0;
        
        if(s.size() == 1) return mp[s[0]];
        
        for(int i=0; i<s.size()-1; i++){
            curr = i;
            if(s.size() > 1) next = i+1;
            
            if(mp[s[curr]] < mp[s[next]]){
                total -= mp[s[i]];
            }else {
                total += mp[s[i]];
            }
        }
        
        total += mp[s[s.size()-1]];
        
        return total;
    }
};