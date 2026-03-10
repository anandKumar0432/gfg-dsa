// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        vector<char> vow = {'a','e','i','o','u'};
        string str = "";
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                str = str;
            }else {
                str += s[i];
            }
        }
        
        return str;
    }
};