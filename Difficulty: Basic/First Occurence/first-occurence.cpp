class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        int first = -1;
        
        if(pat.size() > txt.size()) return -1;
        
        int j=0;
        
        for(int i=0; i<txt.size(); i++){
            first = i;
            
            for(j=0; j<pat.size(); j++){
                if(txt[i + j] != pat[j]){
                    j=0;
                    break;
                }
            }
            
            if(j == pat.size()) return first;
        }
        
        return -1;
    }
};