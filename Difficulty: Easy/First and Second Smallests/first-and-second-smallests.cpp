class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        
        vector<int> res;
        
        for(int i=0; i<arr.size(); i++){
            
            if(arr[i] < min1){
                min1 = arr[i];
            }
            
        }
        
        for(int i=0; i<arr.size(); i++){
            
            if(arr[i] < min2 && arr[i] > min1){
                min2 = arr[i];
            }
        }
        
        res.push_back(min1);
        res.push_back(min2);
        
        if(min2 == INT_MAX){
            return {-1};
        }
        
        return res;
    }
};