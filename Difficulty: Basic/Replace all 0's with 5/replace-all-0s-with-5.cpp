/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        
        if(n == 0) return 5;
        
        vector<int> temp;
        
        while(n > 0){
            int digit = n % 10;
            n = n/10;
            
            if(digit == 0){
                temp.push_back(5);
            } else{
                temp.push_back(digit);
            }
        }
        
        int res = 0;
        
        for(int i=temp.size() - 1; i >= 0; i--){
            res = res * 10 + temp[i];
        }
        
        return res;
    }
};