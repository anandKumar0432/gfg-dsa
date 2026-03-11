// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        string res = "";
        for(int i=0; i<str1.size(); i++){
            bool found = false;
            for(int j=0; j<str2.size(); j++){
                if(str1[i] == str2[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                res += str1[i];
            }
        }
        
        return res;
    }
};
