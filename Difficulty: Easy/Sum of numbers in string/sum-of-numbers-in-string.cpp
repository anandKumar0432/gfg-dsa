class Solution {
  public:
    int findSum(string& s) {
        // code here
        int sum = 0;
        
        int temp = 0;
        
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                temp = temp * 10 + (s[i] - '0');
            }else{
                sum = sum + temp;
                temp = 0;
            }
        }
        
        sum = sum + temp;
        
        return sum ;
    }
};