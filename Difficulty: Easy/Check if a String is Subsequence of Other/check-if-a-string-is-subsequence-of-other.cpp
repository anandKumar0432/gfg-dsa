class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
        int i=0; 
        int j=0;
        
        if(s1.size() > s2.size()){
            return false;
        }
        
        for(j=0; j<s2.size(); j++){
            if(s1[i] == s2[j]) i++;
        }
        
        if(s1.size() == i) return true;
        
        return false;
    }
};