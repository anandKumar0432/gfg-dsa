class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int> res(2, -1);
        
        int n = arr.size();
        
        vector<int> temp(n+1, 0);
        
        for(int i=0; i<arr.size(); i++){
            temp[arr[i]]++;
        }
        
        for(int i=1; i<=n; i++){
            if(temp[i] == 2) res[0] = i;
            if(temp[i] == 0) res[1] = i;
        }
        
        return res;
    }
};