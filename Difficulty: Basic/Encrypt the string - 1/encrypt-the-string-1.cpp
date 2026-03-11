

class Solution {
  public:
    string encryptString(string s) {
        // code here
        int count = 1;
        
        char ch = s[0];
        string str = "";
        
        for(int i=1; i<s.size(); i++){
            if(s[i] == ch){
                count++;
            }else{
                str += ch;
                str += to_string(count);
                ch = s[i];
                count = 1;
            }
        }
        
        str += ch;
        str += to_string(count);
        
        string res = "";
        
        for(int i=str.size()-1; i>=0; i--){
            res += str[i];
        }
        
        return res;
    }
};