class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        
        unordered_map<int, int> mp;
        int n = arr.size();
        int sum = 0;
        
        for(int i=0; i<k; i++){
            mp[arr[i]]++;
        }
        
        vector<int> res;
        
        res.push_back(mp.size());
        
        for(int i=k; i<arr.size(); i++){
            mp[arr[i-k]]--;
            mp[arr[i]]++;
            if(mp[arr[i-k]] == 0)
                mp.erase(arr[i-k]);
            
            res.push_back(mp.size());    
        }
        
        return res;
    }
};