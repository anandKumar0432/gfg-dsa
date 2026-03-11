class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int arr[26] = {0};
        
        for(int i=0; i<s.size(); i++){
            int ch = s[i] - 97;
            
            arr[ch]++;
        }
        
        int maxi = INT_MIN;
        char ch;
        
        for(int i=25; i>=0; i--){
            if(arr[i] >= maxi){
                maxi = arr[i];
                ch = i + 97;
            }
        }
        
        return ch;
    }
};