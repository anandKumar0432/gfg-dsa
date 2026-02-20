class Solution {
  public:
    char firstRep(string s) {
        // code here.
        unordered_map<char, int> freq;
        
        for(char c : s){
            freq[c]++;
        }
        
        for(char c : s){
            if(freq[c] > 1){
                return c;
            }
        }
        
        return '#';
    }
};