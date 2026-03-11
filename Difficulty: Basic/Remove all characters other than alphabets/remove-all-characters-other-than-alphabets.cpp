// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        // A - > 65 , Z -> 90
        // a -> 97 - z-> 122
        
        string res = "";
        
        for(int i=0; i<s.size(); i++){
            int ch = s[i];
            if( (ch >=65 && ch <= 90) || (ch >=97 && ch <= 122)){
                res += s[i];
            }
        }
        
        if(res.size() == 0){
            return "-1";
        }
        return res;
    }
};