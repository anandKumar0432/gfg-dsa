class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        // set<int> arr;
        // for(int i=0; i<a.size(); i++){
        //     arr.insert(a[i]);
        // }
        
        // for(int i=0; i<b.size(); i++){
        //     if(arr.find(b[i]) == arr.end()){
        //         return false;
        //     }
        // }
        
        // return true;
        
        unordered_map<int,int> mp;
        for(int i=0; i<a.size(); i++){
            mp[a[i]]++;
        }
        
        unordered_map<int, int> mp2;
        for(int i=0; i<b.size(); i++){
            mp2[b[i]]++;
        }
        
        for(int i=0; i<b.size(); i++){
            if(mp2[b[i]] > mp[b[i]]) return false;
        }
        
        return true;
    }
};