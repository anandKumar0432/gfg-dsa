class Solution {
  public:
  
    string intToHex(int num){
        
        unordered_map<int, char>mp;
        mp[0] = '0';
        mp[1] = '1';
        mp[2] = '2';
        mp[3] = '3';
        mp[4] = '4';
        mp[5] = '5';
        mp[6] = '6';
        mp[7] = '7';
        mp[8] = '8';
        mp[9] = '9';
        mp[10] = 'a';
        mp[11] = 'b';
        mp[12] = 'c';
        mp[13] = 'd';
        mp[14] = 'e';
        mp[15] = 'f';
        
        string str = "";
        
        while(num > 0){
            int count = num % 16;
            num = num / 16;
            str = str + mp[count];
        }
        
        return str;
    }
    
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
                if(count > 9) {
                    str += intToHex(count);
                } else{
                    str += to_string(count);   
                }
                ch = s[i];
                count = 1;
            }

        }
        
        str += ch;
        
        if(count > 9) {
            str += intToHex(count);
        } else{
            str += to_string(count);   
        }
        
        string res = "";
        
        for(int i=str.size()-1; i>=0; i--){
            res += str[i];
        }
        
        return res;
    }
};